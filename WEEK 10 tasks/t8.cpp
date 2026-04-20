#include <iostream>
using namespace std;
string oddishOrEvenish(int num) 
{
    int sum = 0;
    while (num > 0) 
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    if (sum % 2 == 0)
        return "Evenish";
    else
        return "Oddish";
}
main() 
{
    int number;
    string result;
    cout << "Enter a 5-digit number: ";
    cin >> number;
    result = oddishOrEvenish(number);
    cout << result << endl;

}