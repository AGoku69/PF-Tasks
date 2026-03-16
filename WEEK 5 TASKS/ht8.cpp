#include <iostream>
using namespace std;
main()
{
    int age;
    double machinePrice;
    int toyPrice;
    cout << "Enter the age of the ivan: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> machinePrice;
    cout << "Enter the price of each toy: ";
    cin >> toyPrice;
    int toys;
    double money;
    double gift;
    for(int i = 1; i <= age; i++)
    {
        if(i % 2 == 0) // even birthday
        {
            gift += 10;
            money += gift - 1; // brother takes 1
        }
        else // odd birthday
        {
            toys++;
        }
    }

    money += toys * toyPrice;

    if(money >= machinePrice)
    {
        cout << "Yes! " << money - machinePrice;
    }
    else
    {
        cout << "No! " << machinePrice - money;
    }
}