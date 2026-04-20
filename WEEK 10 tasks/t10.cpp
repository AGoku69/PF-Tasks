#include <iostream>
using namespace std;
string numberToText(int num) 
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                       "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};
    if (num < 10) 
    {
        return ones[num];
    }
    else if (num >= 10 && num < 20) 
    {
        return teens[num - 10];
    }
    else 
    {
        int t = num / 10;
        int o = num % 10;
        if (o == 0)
            return tens[t];
        else
            return tens[t] + ones[o];
    }
}
main() 
{
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;
    cout << numberToText(number) << endl;
}