#include<iostream>
using namespace std;
main()
{
    int sum = 0,digit;
    cout<<"enter a number =  ";
    cin>>digit;
    for(int i=digit; i>0; i= i/10)
    {
        sum = sum + (i%10);
    }
    cout<<"the sum of digits is: "<<sum;
}