#include <iostream>
using namespace std;
string checkAlphabetCase(char ch) 
{
    if (ch == 'A') 
    {
        return "You have entered Capital A";
    }
    else 
    {
        return "You have entered small a";
    }
}
main()
{
    char ch;
    string result;
    cout << "Enter a character (A or a): ";
    cin >> ch;
    result = checkAlphabetCase(ch);
    cout << result << endl;
}