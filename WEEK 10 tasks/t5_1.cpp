#include <iostream>
using namespace std;
int multiplyByFive(int num) 
{
    return num * 5;
}
main() 
{
    int number, result;

    cout << "Enter a number: ";
    cin >> number;

    result = multiplyByFive(number);

    cout << "Result after multiplying by 5: " << result << endl;
}