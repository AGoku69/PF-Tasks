#include <iostream>
using namespace std;
main()
{
    double money;
    int year;
    cout << "Enter the amount of money he has: ";
    cin >> money;
    cout << "Enter the year he wants to check: ";
    cin >> year;
    int age = 18;
    for(int y = 1800; y <= year; y++)
    {
        if(y % 2 == 0) // even year
        {
            money -= 12000;
        }
        else // odd year
        {
            money -= (12000 + 50 * age);
        }
    age++;
    }
    if(money >= 0)
    {
        cout << "Yes! He will live a carefree life and will have "
             << money << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << -money << " dollars to survive." << endl;
    }
}