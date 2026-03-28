#include<iostream>
using namespace std;
main()
{
    int number[5];
    cout<<"Enter 5 numbers: "<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>number[i];
        cout<<"You entered: "<<number[i]<<endl;
    }
    cout<<"The value of number[0] is: "<<number[0]<<endl;
    cout<<"The value of number[4] is: "<<number[4]<<endl;
    
}