#include<iostream>
using namespace std;
main()
{

string name;
int aTP,cTP,asold,csold,donate,total,final;
float perc;
cout<<"enter the movie name : ";
cin>>name;
cout<<"enter the abdut ticket price  :$";
cin>>aTP;
cout<<"enter the child ticket price  :$";
cin>>cTP;
cout<<"enter the abdut ticket price sold : ";
cin>>asold;
cout<<"enter the child ticket price sold : ";
cin>>csold;
cout<<"enter the percentage you want to odnate to charity : ";
cin>>perc;
cout<<"_____________________________________________________"<<endl;
total=(aTP*asold)+(cTP*csold);
donate=total*(perc/100);
final=total-donate;
cout<<"Movie: "<<name<<endl;
cout<<"total amout generated = $"<<total<<endl;
cout<<"donation to charity ("<<perc<<") : $"<<donate<<endl;
cout<<"remaining amount is after donation : $"<<final;

}
