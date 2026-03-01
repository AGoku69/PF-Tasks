#include<iostream>
using namespace std;
main()
{
float i,p;
float chance_i;
int perc;
cout<<" Enter the imposter ammount: ";
cin>>i;
cout<<" Enter the players amount : ";
cin>>p;
chance_i = 100*(i/p);
perc=chance_i;
cout<<perc<<"%";

}