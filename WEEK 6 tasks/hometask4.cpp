#include <iostream>
using namespace std;
main() 
{
    string students[5];
    cout << "Please enter the names of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        getline(cin >> ws, students[i]);
    }
    cout << "\n--- List of Students ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << students[i] << endl;
    }

}