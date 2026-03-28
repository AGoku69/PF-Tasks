#include <iostream>
using namespace std;
main() 
{
    int n;
    int sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << "\nThe total sum of the array is: " << sum << endl;

}