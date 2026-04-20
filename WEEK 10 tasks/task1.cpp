#include<iostream>
using namespace std;
 int value1 = 10;
int value2 = 20;
 int sum()
{
    value1 = 40;               // changes GLOBAL value1 to 40
    return value1 + value2;    // returns 40 + 20 = 60
}
 main()
{
    int x = value1;    // x = 10
    value1 = 100;      // global value1 = 100
    x = 20;            // local x = 20
    value2 = sum();    // sum() --> value1 becomes 40, value2 becomes 60
    cout << value1 << " " << value2;   // OUTPUT: 40 60
}