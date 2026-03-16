#include<iostream>
using namespace std;
main()
{
int num,number=0,sum=0;
while (number < 5)
{
cout << "Please Enter any Number : ";
cin >> num;
sum = sum + num;
number++;
}

cout << " sum = " << sum;
}