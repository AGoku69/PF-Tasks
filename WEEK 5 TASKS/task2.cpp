#include<iostream>
using namespace std;
main()
{
int num,number=0,sum=0;
while (number >= 0)
{
cout << "Please Enter any Number : ";
cin >> num;
if (num < 0)
{
    cout << "Negative number entered. Exiting loop." << endl;
    break;
}
sum = sum + num;
number++;
}

cout << " sum = " << sum;
}