#include<iostream>
using namespace std;
main()
{
int int_v,final_v,acc,time;
cout<<"Enter initial velovity (m/s) : ";
cin>>int_v;
cout<<" Enter acceleration (m/s^2) : ";
cin>>acc;
cout<<" Enter time (s) : ";
cin>>time;
final_v=(acc*time)+int_v;
cout<<" then final velocity is equal to : "<<final_v;

}