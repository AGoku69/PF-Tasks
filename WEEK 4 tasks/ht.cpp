#include<iostream>
using namespace std;
main()
{
    string country;
    int ticketPrice,bonus,afterbonus;
    cout<<"enter country =  ";
    cin>>country;
    cout<<"enter tickt pric in dollars = ";
    cin>>ticketPrice;
    if( country == "Pakistan")
    {
        bonus=ticketPrice*0.05;
    }
    if (country == "India")
    {
         bonus=ticketPrice*0.05;
    }
    if (country == "Germany")
    {
         bonus=ticketPrice*0.05;
    }
    if (country == "Ireland")
    {
         bonus=ticketPrice*0.1;
    }
    afterbonus=ticketPrice-bonus;
    cout<<"country name is = "<<country<<endl<<"the ticket price is = "<<ticketPrice; 
    
}