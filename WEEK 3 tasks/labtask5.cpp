#include<iostream>
using namespace std;
main()
{
string name;
float mm,mi,tm;
float ag;
cout<<"enter your name : ";
cin>>name;
cout<<"enter matric marks ( out of 1100 ): ";
cin>>mm;
cout<<"enter intermediate marks( out of 550 ): ";
cin>>mi;
cout<<"enter ECAT marks (out of 400): ";
cin>>tm;
ag= ( (tm / 400.0)* 50)+( (mi / 550.0)* 40)+( (mm /1100.0)* 10);
cout<<"aggrecate score for "<<name<<" is "<<ag;

}