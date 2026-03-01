#include<iostream>
using namespace std;
main()
{

int Cureentpopu,birthRate,populationAfter;
cout<<" Ener the curent world population : ";
cin>>Cureentpopu;
cout<<" Ener the monthly birth rate (no of births per month) : ";
cin>>birthRate;
populationAfter=Cureentpopu+birthRate*360;
cout<<" the population in three decades will be : "<<populationAfter;

}
