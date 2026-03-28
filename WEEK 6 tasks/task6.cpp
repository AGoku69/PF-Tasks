#include<iostream>
using namespace std;
main()
{
    int sum=0;
    int average=0;
    int number[5] = {1, 2, 3, 4, 5};
    for(int i=0; i<5; i++)
    {
        sum += number[i];
    }
    average = sum / 5;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average;
}