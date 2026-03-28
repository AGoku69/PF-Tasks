#include <iostream>
using namespace std;
main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Numbers in reverse order: ";
    for(int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i] << " ";
    }

}