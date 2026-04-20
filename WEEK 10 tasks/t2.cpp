#include <iostream>
#include <cmath>   // for pow()
using namespace std;
main() 
{
    float number1, number2, result;

    cout << "Enter the base number: ";
    cin >> number1;

    cout << "Enter the exponent: ";
    cin >> number2;

    result = pow(number1, number2);

    cout << "Result = " << result << endl;

}