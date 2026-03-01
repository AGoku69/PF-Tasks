#include<iostream>
using namespace std;
main()
{

int digit,digit2,digit3,digit4,d1,d2,d3,d4,sum;
cout<<"enter a 4 digit number : ";
cin>>digit;
d1=digit%10;
digit2=digit/10;

d2=digit2%10;
digit3=digit2/10;

d3=digit3%10;
digit4=digit3/10;

d4=digit4%10;

sum=d1+d2+d3+d4;

cout<<digit<<endl<<d1<<endl<<digit2<<endl<<d2<<endl<<digit3<<endl<<d3<<endl<<digit4<<endl<<d4<<endl<<d1<<"+"<<d2<<"+"<<d3<<"+"<<d4<<endl<<sum;

}
