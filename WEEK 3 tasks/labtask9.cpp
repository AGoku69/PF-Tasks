#include<iostream>
using namespace std;
main()
{
int year, yearindays;
cout<<" Enter yor age in years : ";
cin>>year;
yearindays=year*365-(year*365%4);
cout<<" your age in days is approximately "<<yearindays<<" days ";

}
