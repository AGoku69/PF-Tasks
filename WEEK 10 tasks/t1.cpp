#include<iostream>
#include<conio.h>
using namespace std;
int minimum(int numb1, int numb2)
{
    if (numb1 < numb2)
        return numb1;
    else
        return numb2;
}
main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Minimum of " << num1 << " and " << num2 << " is: " << minimum(num1, num2) << endl;
    cout << "Press any key to exit..." << endl;
    getch();
}