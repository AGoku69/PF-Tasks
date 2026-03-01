#include<iostream>
using namespace std;
main()
{
int fBag,cost,area,costBag,costArea;
cout<<" Enter the size of fertilizer bag in pounds : ";
cin>>fBag;
cout<<" Enter the cost of the bag : $";
cin>>cost;
cout<<" Enter the area in square feet that can be covered by the bag : ";
cin>>area;
costBag=cost/fBag;
costArea=cost/area;
cout<<" the cost of fertilizer per pound is :$"<<costBag<<endl;
cout<<" the cost of fertilizer per area is :$"<<costArea;

}
