#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) 
    {
        cout << "Invalid array size." << endl;
        return 0;
    }
    int numbers[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int largest = numbers[0];
    int smallest = numbers[0];
    for (int i = 1; i < n; i++) 
    {
        if (numbers[i] > largest) 
        {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) 
        {
            smallest = numbers[i];
        }
    }
    cout << "\n-----------------------------" << endl;
    cout << "Largest number  : " << largest << endl;
    cout << "Smallest number : " << smallest << endl;
    cout << "-----------------------------" << endl;
}