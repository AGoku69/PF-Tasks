#include <iostream>
using namespace std;
main() 
{
    int CORRECT_PIN = 1234;
    int enteredPins[3];
    float balance = 1000.0;
    bool isAuthenticated = false;
    int choice;
    cout << "--- Welcome to the Secure ATM System ---" << endl;
    for (int i = 0; i < 3; i++) 
    {
        cout << "Attempt " << i + 1 << " - Enter your 4-digit PIN: ";
        cin >> enteredPins[i];
        if (enteredPins[i] == CORRECT_PIN) 
        {
            isAuthenticated = true;
            cout << "\nLogin Successful!" << endl;
            break;
        } else 
        {
            cout << "Incorrect PIN. ";
            if (i < 2) 
            {
                cout << "Try again." << endl;
                continue;
            } else 
            {
                cout << "No attempts left." << endl;
            }
        }
    }
    if (isAuthenticated) 
    {
        while (true) 
        {
            cout << "\n--- ATM MENU ---" << endl;
            cout << "1 -> Check Balance" << endl;
            cout << "2 -> Deposit Money" << endl;
            cout << "3 -> Withdraw Money" << endl;
            cout << "4 -> Exit" << endl;
            cout << "Select an option: ";
            cin >> choice;
            if (choice == 4) 
            {
                cout << "Thank you for using our ATM. Goodbye!" << endl;
                break;
            } 
            else if (choice == 1) 
            {
                cout << "Your current balance is: $" << balance << endl;
            } 
            else if (choice == 2) 
            {
                float deposit;
                cout << "Enter amount to deposit: $";
                cin >> deposit;
                if (deposit > 0) 
                {
                    balance += deposit;
                    cout << "Successfully deposited $" << deposit << endl;
                } else 
                {
                    cout << "Invalid deposit amount." << endl;
                }
            } 
            else if (choice == 3) 
            {
                float withdraw;
                cout << "Enter amount to withdraw: $";
                cin >> withdraw;
                if (withdraw > 0 && withdraw <= balance) 
                {
                    balance -= withdraw;
                    cout << "Please collect your cash: $" << withdraw << endl;
                } 
                else if (withdraw > balance) 
                {
                    cout << "Insufficient Balance!" << endl;
                } else 
                {
                    cout << "Invalid withdrawal amount." << endl;
                }
            } 
            else 
            {
                cout << "Invalid selection. Please choose 1-4." << endl;
                continue;
            }
        }
    } 
    else 
    {
        cout << "\nToo many incorrect attempts. Your card has been blocked for security." << endl;
    }
}