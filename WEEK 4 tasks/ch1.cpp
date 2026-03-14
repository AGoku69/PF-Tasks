#include<iostream>
using namespace std;
main()
{
    int numb,even;
    cout<<"enter a number =  ";
    cin>>numb;
    even = numb%2;
    if( even == 0 )
    {
        cout<<"the number entered is even";
    }
    else 
    {
        cout<<"the number entered is odd";
    }
    
}