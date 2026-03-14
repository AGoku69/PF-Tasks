#include<iostream>
using namespace std;
main()
{
    int monthsalary=10000,laptopprice=50000;
    int advancesalary;
    advancesalary=(monthsalary*0.50)*6;
    if( advancesalary == laptopprice )
    {
        cout<<"yes you can buy the laptop";
    }
    else 
    {
        cout<<"you cannot buy the laptop "<<"then the months required to buy laptop are : 10";
    }
    
}