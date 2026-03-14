#include<iostream>
using namespace std;
main()
{   
    int holidays,workingdays,totalplay,differece,hours,minutes;
    cout<<"enter the number of holidays = ";
    cin>>holidays;
    workingdays=365-holidays;
    totalplay=(workingdays*63)+(holidays*127);
    differece=30000-totalplay;
    hours=differece/60;
    minutes=differece%60;
    if (totalplay < 30000)
    {
        cout<<"tom sleeps well\n";
        cout<<hours<<" hours and "<<minutes<<" minutes less to play";
    }
    else
    {
        cout<<"tom will run away\n";
        cout<<hours<<" hours and "<<minutes<<" minutes for play";
    }
    
}    