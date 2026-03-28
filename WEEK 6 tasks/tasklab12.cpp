#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    bool isSpecial = true;
    for(int i = 0; i < n; i++) 
    {
        // Even index → even number
        if(i % 2 == 0 && arr[i] % 2 != 0) 
        {
            isSpecial = false;
            break;
        }
        // Odd index → odd number
        else if(i % 2 != 0 && arr[i] % 2 == 0) 
        {
            isSpecial = false;
            break;
        }
    }
    if(isSpecial) 
    {
        cout << "true";
    } 
    else 
    {
        cout << "false";
    }
}