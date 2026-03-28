#include<iostream>
using namespace std;
main()
{
    int number[100], j, i;
    cout<<"enter a number: "<<endl;
    cin>>j;
    for( i=0; i<j; i++)
    {
        cin>>number[i];
        cout<<"You entered: "<<number[i]<<endl;
    }
    for(int i=0; i<j; i++)
    {
        cout<<"The value of number["<<i<<"] is: "<<number[i]<<endl;
    }
}