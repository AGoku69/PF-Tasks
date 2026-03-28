#include <iostream>
using namespace std;
void countEvens(int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            count++;
        }
    }
    cout << "\nTotal number of even elements: " << count << endl;
}
main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    countEvens(numbers, n);

}