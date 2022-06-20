#include  <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn()
{
    string user , pass ,  un , pw;

    cout << "Enter username: "; 
    cin >> user;
    cout << "Enter password: ";
    cin>> pass;

    ifstream read("data\\" + user + ".txt");
    
        
    getline(read, un);
    getline(read, pw);

    if(un == user && pw == pass){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int choice; 
    cout << "1: Register\n2: Login\\nYour choice: "; cin >> choice;
    if(choice == 1)
    {
        string user , pass;
        
        cout<< "select a username: "<< endl; 
        cin>> user;
        cout<< "select a password: "<< endl;
        cin>> pass;
        //set the data

        ofstream file;
        //calls the ofstream object file
        file.open("data\\"+user+ ".txt");// open file with user
        //
        file << user << endl << pass;
        file.close();//close the file
        main();
    }
    else if(choice == 2)
    {
        bool status = IsLoggedIn();
        if(!status)
        {
            cout<< "False Login!" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout<< "Succesfully logged in!"<< endl;
            system("PAUSE");
            return 1;
        }
    }
}