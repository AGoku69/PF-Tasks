#include<iostream>
using namespace std;
main()
{
float mb,kb,byte,bit;
cout<<"enter the size in megabytes : ";
cin>>mb;
kb=mb*1024;
byte=kb*1024;
bit=byte*8;
cout<<mb<<" mb is equivalent to "<<bit<<" bits ";

}