#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    // Assume first element is largest
    int largest = arr[0];
    // Compare with rest of elements
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > largest) 
        {
            largest = arr[i];
        }
    }
    cout << "Largest number: " << largest;
}