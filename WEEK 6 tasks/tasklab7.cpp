#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter number of resistors: ";
    cin >> n;
    float arr[n];
    float total = 0;
    cout << "Enter resistance values:\n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        total += arr[i];  // add each value
    }
    cout << "Total Resistance: " << total << " ohms";

}