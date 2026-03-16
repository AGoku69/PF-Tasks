#include<iostream>
using namespace std;
main()
{
    char  choice;
    cout << "Enter a character: ";
    cin >> choice;
    while(choice != 'N' && choice != 'n')
    {
        cout << "i am happy"<< endl;
        cout << "Enter your choice : ";
        cin >> choice;
    }
    
}