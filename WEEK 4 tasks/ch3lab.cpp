#include<iostream>
using namespace std;
main()
{
    char op;
    int numb1,numb2,cal;
    cout<<"enter a number1 =  ";
    cin>>numb1;
    cout<<"enter a operator = ";
    cin>>op;
    cout<<"enter a number2 =  ";
    cin>>numb2;
    if( op == '+')
    {  
        cal=numb1+numb2;
        cout<<numb1<<op<<numb2<<"="<<cal;
    }
     if( op == '-')
    {  
        cal=numb1-numb2;
        cout<<numb1<<op<<numb2<<"="<<cal;
    }
     if( op == '*')
    {  
        cal=numb1*numb2;
        cout<<numb1<<op<<numb2<<"="<<cal;
    }
     if( op == '/')
    {  
        cal=numb1/numb2;
        cout<<numb1<<op<<numb2<<"="<<cal;
    }
    
}