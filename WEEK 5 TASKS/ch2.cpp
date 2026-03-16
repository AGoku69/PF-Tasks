#include<iostream>
using namespace std;
main()
{
    int numb,x,digit,count=0;
    cout<<"enter a number =  ";
    cin>>numb;  
    cout<<" enter digit = ";
    cin>>digit;
    for (numb; numb > 0; numb = numb / 10)
    {   
        x = numb % 10;
        if(digit==x)
        {
            count++;
        }   
    }
    cout<<"the digit "<<digit<<" is repeated "<<count<<" times in the number";
}