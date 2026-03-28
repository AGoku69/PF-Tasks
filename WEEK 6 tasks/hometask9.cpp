#include <iostream>
using namespace std;
main() 
{
    int MAX_BOOKS = 100;
    string bookTitles[MAX_BOOKS];
    bool isBorrowed[MAX_BOOKS]; 
    int bookCount = 0;
    int choice;
    while (true) 
    {
        cout << "\n===== LIBRARY SYSTEM MENU =====" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Return Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 5) 
        {
            cout << "Exiting System. Goodbye!" << endl;
            break;
        }
        else if (choice == 1) 
        {
            int num;
            cout << "How many books to add? ";
            cin >> num;
            for (int i = 0; i < num; i++) 
            {
                if (bookCount < MAX_BOOKS) 
                {
                    cout << "Enter title for book " << bookCount + 1 << ": ";
                    getline(cin >> ws, bookTitles[bookCount]);
                    isBorrowed[bookCount] = false;
                    bookCount++;
                } 
                else 
                {
                    cout << "Library limit reached!" << endl;
                    break;
                }
            }
        }
        else if (choice == 2) 
        {
            if (bookCount == 0) 
            {
                cout << "No books in the library yet." << endl;
            } 
            else 
            {
                cout << "\n--- Current Library Inventory ---" << endl;
                for (int i = 0; i < bookCount; i++) 
                {
                    cout << i + 1 << ". " << bookTitles[i] << (isBorrowed[i] ? " [Status: Borrowed]" : " [Status: Available]") << endl;
                }
            }
        }
        else if (choice == 3) 
        {
            int id;
            cout << "Enter book number to borrow: ";
            cin >> id;
            if (id > 0 && id <= bookCount) 
            {
                if (!isBorrowed[id - 1]) 
                {
                    isBorrowed[id - 1] = true;
                    cout << "Success! You borrowed: " << bookTitles[id - 1] << endl;
                } 
                else 
                {
                    cout << "Error: Book is already out." << endl;
                }
            } 
            else 
            {
                cout << "Error: Book number not found." << endl;
            }
        }
        else if (choice == 4) 
        {
            int id;
            cout << "Enter book number to return: ";
            cin >> id;
            if (id > 0 && id <= bookCount) 
            {
                if (isBorrowed[id - 1]) 
                {
                    isBorrowed[id - 1] = false;
                    cout << "Success! You returned: " << bookTitles[id - 1] << endl;
                }
                else 
                {
                    cout << "Error: This book was never borrowed." << endl;
                }
            }
            else 
            {
                cout << "Error: Invalid book number." << endl;
            }
        }
        else 
        {
            cout << "Invalid selection. Please choose 1-5." << endl;
        }
    }
}