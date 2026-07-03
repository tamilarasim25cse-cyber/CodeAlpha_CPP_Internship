#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int choice;
    string username, password;
    string user, pass;
    bool found = false;

    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        ifstream infile("users.txt");

        while (infile >> user >> pass)
        {
            if (user == username)
            {
                found = true;
                break;
            }
        }
        infile.close();

        if (found)
        {
            cout << "Username already exists!" << endl;
        }
        else
        {
            ofstream outfile("users.txt", ios::app);
            outfile << username << " " << password << endl;
            outfile.close();

            cout << "Registration Successful!" << endl;
        }
    }
    else if (choice == 2)
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        ifstream infile("users.txt");

        while (infile >> user >> pass)
        {
            if (user == username && pass == password)
            {
                found = true;
                break;
            }
        }
        infile.close();

        if (found)
        {
            cout << "Login Successful!" << endl;
        }
        else
        {
            cout << "Invalid Username or Password!" << endl;
        }
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}
