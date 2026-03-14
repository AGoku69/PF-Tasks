#include<iostream>
using namespace std;
main()
{
    string b1,b2,b3;
    int a1,a2,a3;
    cout<<"enter a name1 =  ";
    cin>>b1;
    cout<<"enter a name2 = ";
    cin>>b2;
    cout<<"enter a name3 =  ";
    cin>>b3;
    cout<<"enter a age1 =  ";
    cin>>a1;
    cout<<"enter a age2 = ";
    cin>>a2;
    cout<<"enter a age23 =  ";
    cin>>a3;
    if(a1<<a2)
    {
        cout<<"a1 is youngest";
    }
    if(a2<<a3)
    {
        cout<<"a2 is youngest";
    }
    else{
        cout<<"a3 is youngest";
    }  
}    