#include <iostream>
using namespace std;
main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = "";
    for(int i = 0; i < str.length(); i++) 
    {
        char ch = str[i];
        // Check if NOT a vowel
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') 
        {
           result += ch;
        }
    }
    cout << "Result: " << result;
}