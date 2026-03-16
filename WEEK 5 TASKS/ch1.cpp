#include<iostream>
using namespace std;
main()
{
    int numb=24;
    cout<<"mutiplication table of "<<numb<<" is : "<<endl;
for (int i = 1; i <= 10; i++)
{   
    cout<< numb << " * " << i << " = " << numb * i << endl;
    if (i == 10)
    {
        numb = 50;
        cout<<"mutiplication table of "<<numb<<" is : "<<endl;
        for (int i = 1; i <= 10; i++)
{   
    cout<< numb << " * " << i << " = " << numb * i << endl;
    if (i == 10)
    {
        numb = 29;
        cout<<"mutiplication table of "<<numb<<" is : "<<endl;
        for (int i = 1; i <= 10; i++)
{
    cout<< numb << " * " << i << " = " << numb * i << endl;
    }
    
}
    }
    
}

}

}