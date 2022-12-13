/**
 *  @file main.cpp
 *  @author Stephen Gilbert
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <dirent.h>
#include <cctype>
#include <algorithm>
#include <chrono>
#include <thread>
#include <iomanip>
#include <sstream>
using namespace std;

const double PROBLEM_POINTS = 30.0;

double total = 0;
double totalPossible = 2.0;

double correctPoints = 0;
double correctPossible = 0;

void CHECK_ERR_PRINTED(const string& cmd, int points = 1)
{
    correctPossible += points;

    string msg = cmd + " 2> err.txt 1> out.txt";
    int result = system(msg.c_str());

    ifstream ein("err.txt");
    ifstream oin("out.txt");

    // ein at least 4 characters long, oin should have no characters in it
    string eline, oline;
    getline(ein, eline);
    getline(oin, oline);

    if (result != 0 && eline.length() > 0 && oline.length() == 0)
    {
        cout << "   + " << cmd << "->" << eline << endl;
        correctPoints += points;
    }
    else if (result == 0)
    {
        cout << "   X Should exit with error value. " << eline << endl;
    }
    else
    {
        cout << "   X  Should produce an error message: " << cmd << endl;
    }

    ein.close();
    oin.close();

	std::this_thread::sleep_for(std::chrono::milliseconds(10));
    //Sleep(10); // give it time to finish
    system("rm -f err.txt 2>/dev/null");
    system("rm -f out.txt 2>/dev/null");
}

string impl(const string& fname, const string& searchFor, const string& replaceWith)
{
    ifstream in(fname.c_str());
    int lineNo = 1;
    string result;
    string line;
    while (getline(in, line))
    {
        auto pos = line.find(searchFor);
        if (pos == string::npos)
        {
            result += line + "\n";
        }
        else
        {
            result += line.substr(0, pos);
            result += replaceWith;
            result += line.substr((pos + searchFor.length())) + "\n";
        }
        lineNo++;
    }

    return result;
}
void CHECK_FILE(const vector< vector<string> >& v)
{
    correctPossible++;

    vector<string> data = v[rand() % v.size()];

    string fname = "../data/" + data[0];
    string searchFor = data[1 + rand() % (data.size() - 1)];
    string replaceWith = data[1 + rand() % (data.size() - 1)];

    // Run the student's code
    ostringstream cmd;
    cmd << "./frp " << fname << " "
        << searchFor << " " << replaceWith << " 2> err.txt 1> out.txt";
    int result = system(cmd.str().c_str());
	std::this_thread::sleep_for(std::chrono::milliseconds(10));
    //Sleep(10); // give it time to finish
    cout.flush();
    cerr.flush();

    ifstream ein("err.txt");
    ifstream oin("out.txt");

    // ein should be empty, oin should have at least one line in it
    string eline, oline, oResult;
    getline(ein, eline);
    while (getline(oin, oline))
    {
        oResult += oline + "\n";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(10));
	//Sleep(10); // give it time to finish
    cout.flush();
    cerr.flush();
    ein.close();
    oin.close();

    // Now, read the same file correctly :)
    string expected = impl(fname, searchFor, replaceWith);

    if (result == 0 && eline.length() == 0 && oResult == expected)
    {
        cout << "   + Correctly replaced " << searchFor << " with "
            << replaceWith << " from " << fname << "->OK" << endl;
        correctPoints ++;
    }
    else if (result != 0)
    {
        cout << "   X " << eline << endl;
    }
    else if (oResult != expected)
    {
        cout << "   X  Invalid replacement of " << searchFor << " with "
            << replaceWith << " from " << fname << "." << endl;
        cout << "      Expect: " << endl << expected << endl;
        cout << "      Actual: " << endl << oResult << endl;
        cout.flush();
        cerr.flush();
    }


    std::this_thread::sleep_for(std::chrono::milliseconds(10));
	//Sleep(10);
    system("rm -f err.txt 2>/dev/null");
    system("rm -f out.txt 2>/dev/null");
}


inline bool my_predicate(char c)
{
    return ! isalpha(c);
}
string& clean(string& s)
{
    s.erase(remove_if(s.begin(), s.end(), my_predicate), s.end());
    return s;
}

void fill(vector< vector<string> >& v)
{
    DIR *pdir;
    struct dirent *pent;

    pdir = opendir("../data"); // open directory
    if (!pdir)
    {
        cerr << "opendir() failure; terminating" << endl;
        exit(1);
    }

    while ((pent = readdir(pdir)))
    {
        string name = pent->d_name;
        if (name == "." || name == "..")
            continue; // don't care about these
        // Create a new vector and add the name to it.
        vector<string> results;
        results.push_back(name);

        // Put all the words in the vector
        name = "../data/" + name;
        ifstream in(name.c_str());
        string word;
        while (in >> word) results.push_back(clean(word));
        in.close();

        v.push_back(results);
	}

}
/**
 * Run your program's tests
 */
int main()
{
    // Read all of the files in the directory
    // Fill in all of the words
    vector< vector<string> > testData;
    fill(testData);

    srand(static_cast<unsigned>(time(0)));

    cout << "Checking frp" << endl;
    cout << "-----------------------------------------------------" << endl;
        if (system("g++ -std=c++17 frp.cpp -o frp 2>/dev/null") == 0) {
        cout << " + ./frp compiles and runs: + 2 points" << endl << endl;
        total += 2;
    }
    else {
        cout << " X ./frp does not compile or run. 0 POINTS" << endl;
        exit(0);
    }

    cout << "   --Check some different command lines--" << endl;

    CHECK_ERR_PRINTED("./frp ", 2); // no args
    CHECK_ERR_PRINTED("./frp  data/a1.txt", 2); // only 1 arg
    CHECK_ERR_PRINTED("./frp  data/a-bad.txt frog", 5); // 2 args, but can't open file

    cout << endl;
    cout << "   --Check some different files--" << endl;

    for (int i = 0; i < 6; i++)
    {
        CHECK_FILE(testData);
    }

    cout << endl;

    totalPossible += correctPossible;
    double correctPercent = correctPoints / correctPossible;
    cout << " Correctness: " << fixed << setprecision(2) << (correctPoints) << " ("
        << (correctPercent * 100) << "%)" << endl;

    total += correctPoints;
    cout << endl;

    double percent = total / totalPossible;
    double score = PROBLEM_POINTS * percent;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
	//Sleep(10);
    string dashes(70, '-');
    cout << dashes << endl;
    cout << "frp: " << score << " (" << (percent) * 100 << "%)" << endl;
    cout << dashes << endl;

    return 0;
}
