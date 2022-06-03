#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc ,char* argv[])
{
    if(argc < 3)
    {
        cerr << "Usage:" << argv[0] << " file-to-open word-to-find [replace-with]"<< endl;
        return -1;
    }

    ifstream in(argv[1]);

    if(in.fail()){
        cerr << "Cannot open " << argv[1] << endl;
        return -2;
    }

    string search = argv[2];
    string replace;

    if(argc> 3) replace = argv[3];
    string line;
    while(getline(in, line)){
        auto pos = line.find(search);
        if(pos != string::npos)
        {
            line= line.substr(0,pos)  +replace + line.substr(pos + search.size());
        }
        cout << line << endl;
    }
    return 0;
}

