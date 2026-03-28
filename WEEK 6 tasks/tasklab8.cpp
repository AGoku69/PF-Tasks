#include <iostream>
using namespace std;
main() 
{
    int arr1[2];
    int n;
    // Input first array (size always 2)
    cout << "Enter 2 elements of first array: ";
    for(int i = 0; i < 2; i++) 
    {
        cin >> arr1[i];
    }
    // Input second array
    cout << "Enter size of second array: ";
    cin >> n;
    int arr2[n];
    cout << "Enter elements of second array: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr2[i];
    }
    // Output result
    cout << "Resulting array: ";
    cout << arr1[0] << " ";  // first element
    for(int i = 0; i < n; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << arr1[1];  // last element
}