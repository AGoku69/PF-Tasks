#include<iostream>
using namespace std;
main()
{
    int amount,discount;
    cout<<"enter the amount of bill =  ";
    cin>>amount;
    if( amount <= 5000 )
    {
        discount= amount-(amount*0.05);
        cout<<" your amount after discount is = "<<discount;
    }
    else 
    {
        discount= amount-(amount-0.1);
        cout<<" your amount after discount is = "<<discount;
    }
    
}