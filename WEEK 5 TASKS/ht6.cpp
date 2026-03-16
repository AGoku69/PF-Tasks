#include<iostream>
using namespace std;
int GCD(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a * b) / GCD(a, b);
}
main()
{
    int num1,num2;
    cout<<"enter a number1 =  ";
    cin>>num1;
    cout<<"enter a number2 =  ";
    cin>>num2;
    cout<<"the GCD of "<<num1<<" and "<<num2<<" is : "<<GCD(num1,num2)<<endl;
    cout<<"the LCM of "<<num1<<" and "<<num2<<" is : "<<lcm(num1,num2);
    
}