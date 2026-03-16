#include<iostream>
using namespace std;
main()
{
int number,j=1;
cout << "Please Enter any Number : ";
cin >> number;
for(int i = number; i > 0; i --)
{
    j=j*i;
    cout << i << " * ";
    
}
cout << " = " << j;
}