#include <iostream>
using namespace std;
int power(int base, int exponent) 
{
    int result = 1;
    for(int i = 1; i <= exponent; i++) 
    {
        result = result * base;
    }
    return result;
}
main() 
{
    int num1, num2, result;
    cout << "Enter the base number: ";
    cin >> num1;
    cout << "Enter the exponent: ";
    cin >> num2;
    result = power(num1, num2);
    cout << "Result = " << result << endl;
    return 0;
}