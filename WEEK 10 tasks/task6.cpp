#include<iostream>
using namespace std;
// Helper function to calculate factorial of a digit
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
// Function to check if a number is strong
bool isStrong(int num)
{
    int temp = num;
    int sumOfFactorials = 0;
 
    while (temp > 0)
    {
        int digit = temp % 10;
        sumOfFactorials += factorial(digit);
        temp /= 10;
    }
 
    return sumOfFactorials == num;
}
main()
{
    int num;
    cin >> num;
 
    if (isStrong(num))
        cout << "Strong Number" << endl;
    else
        cout << "Not Strong Number" << endl;
}