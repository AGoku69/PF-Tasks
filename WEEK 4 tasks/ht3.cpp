#include<iostream>
using namespace std;
main()
{   float redrossp=2.00;
    float whiterossp=4.10;
    float tulipp=2.50;
    float redross,whiteross,tulip,total,discount;
    cout<<"enter amount of red ross=  "<<endl;
    cin>>redross;
    cout<<"enter amount of white ross=  "<<endl;
    cin>>whiteross;
    cout<<"enter amount of tulip=  ";
    cin>>tulip;
    total=(redross*redrossp)+(whiteross*whiterossp)+(tulip*tulipp);
    if( total > 200)
    {
        discount=total-total*0.2;
        cout<<"original price = "<<total<<endl<<"discounted price = "<<discount;
    }
    else
    {
    cout<<"original price = "<<total;
    }
}    