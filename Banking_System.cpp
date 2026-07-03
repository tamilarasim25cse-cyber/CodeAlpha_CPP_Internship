#include <iostream>
using namespace std;

int main()
{
    int choice;
    string name;
    float balance = 0, amount;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    do
    {
        cout << "\n===== BANK MENU =====";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Amount Deposited Successfully!" << endl;
                break;

            case 2:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance = balance - amount;
                    cout << "Amount Withdrawn Successfully!" << endl;
                }
                else
                {
                    cout << "Insufficient Balance!" << endl;
                }
                break;

            case 3:
                cout << "Account Holder: " << name << endl;
                cout << "Current Balance: " << balance << endl;
                break;

            case 4:
                cout << "Thank You for Using Banking System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
