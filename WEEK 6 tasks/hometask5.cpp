#include <iostream>
using namespace std;
main() 
{
    int n;
    int count = 0;
    char targetLetter;
    cout << "Enter the number of customers: ";
    cin >> n;
    string customers[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter name for customer " << i + 1 << ": ";
        getline(cin >> ws , customers[i]);
    }
    cout << "\nEnter a letter to search for: ";
    cin >> targetLetter;
    for (int i = 0; i < n; i++) 
    {
        if (!customers[i].empty()) 
        {
            if (customers[i][0] == toupper(targetLetter) || customers[i][0] == tolower(targetLetter)) 
            {
                count++;
            }
        }
    }
    cout << "Number of names starting with '" << targetLetter << "': " << count << endl;
}