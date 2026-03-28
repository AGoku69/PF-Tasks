#include <iostream>
using namespace std;
main() 
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    int count = 0; // tracks how many unique numbers stored

    for(int i = 0; i < n; i++) 
    {
        int num;
        cout<<"Enter number: ";
        cin>>num;

        bool alreadyEntered = false;
        // Check if number already exists
        for(int j = 0; j < count; j++) {
            if(arr[j] == num) 
            {
                alreadyEntered = true;
                break;
            }
        }

        if(alreadyEntered) 
        {
            cout<<"Already Entered\n";
            i--; // repeat this iteration (don’t count duplicate)
        }
        else 
        {
            arr[count] = num;
            count++;
        }
    }

}