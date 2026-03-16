#include<iostream>
using namespace std;
main()
{

int n1 = 0, n2 = 1, next;
int n;
cout<<"how many facial series do you want to print : ";
cin>>n;
cout<<n1<<", ";//0,1,1,
cout<<n2;//1 1 2
for(int x = 1; x < n - 1; x++)
{
next = n1 + n2;//1,2,3

cout << ", " << next;
n1 = n2;//1,1
n2 = next; //1,2
}

}