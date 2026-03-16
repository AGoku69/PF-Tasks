#include <iostream>
using namespace std;
main()
{
    int choice;
    cout << "Library Management System\n";
    cout << "1. Add Books\n";
    cout << "2. View Books\n";
    cout << "3. Borrow Books\n";
    cout << "4. Return Books\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    while(choice >= 1 && choice <= 5)
    {
    if(choice == 1)
    {
        cout << "You selected: Add Books.";
    }
    else if(choice == 2)
    {
        cout << "You selected: View Books.";
    }
    else if(choice == 3)
    {
        cout << "You selected: Borrow Books.";
    }
    else if(choice == 4)
    {
        cout << "You selected: Return Books.";
    }
    else if(choice == 5)
    {
        cout << "Exiting Library System. Thank you!";
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