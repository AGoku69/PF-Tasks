#include <iostream>
using namespace std;
float squareRoot(int num) 
{
    float i = 0;
    while (i * i <= num) 
    {
        i += 0.01;
    }    
    return i;
}
int main() 
{
    int number;
    float result;
    cout << "Enter a number: ";
    cin >> number;
    result = squareRoot(number);
    cout << "Square root ≈ " << result << endl;
}