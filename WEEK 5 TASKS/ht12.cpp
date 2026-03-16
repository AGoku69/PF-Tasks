#include <iostream>
using namespace std;
main()
{
    double num1, num2;
    int choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nSimple Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Clear Screen\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    while(choice >= 1 && choice <= 6)
    {
    if(choice == 1)
    {
        cout << "Sum = " << num1 + num2;
    }
    else if(choice == 2)
    {
        cout << "Difference = " << num1 - num2;
    }
    else if(choice == 3)
    {
        cout << "Product = " << num1 * num2;
    }
    else if(choice == 4)
    {
        if(num2 == 0)
            cout << "Error! Division by zero is not allowed.";
        else
            cout << "Result = " << num1 / num2;
    }
    else if(choice == 5)
    {
        system("cls");
        cout << "Screen cleared.";
    }
    else if(choice == 6)
    {
        cout << "Exiting Calculator. Goodbye!";
        break;
    }
    else
    {
        cout << "Invalid choice!";
    }
    cout << "\nEnter your choice: ";
    cin >> choice;
  }
}