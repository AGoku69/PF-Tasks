#include<iostream>
using namespace std;
main()
{
float vp,fp,tot,totinRS;
int tot_v,tot_f;
cout<<"enter the vegitable price per kilogram (in coins) : ";
cin>>vp;
cout<<"enter the fruits price per kilogram (in coins) : ";
cin>>fp;
cout<<"enter the vegitable total kilogram : ";
cin>>tot_v;
cout<<"enter the fruit total kilogram : ";
cin>>tot_f;
tot=(vp*tot_v)+(fp*tot_f);
totinRS=tot/1.94;
cout<<"total earning in rupees (RS) : "<<totinRS;

}
