#include<iostream>
using namespace std;
main()
{
int sum = 0;
for (int i ; i > 0; )
{
    cout << "Please Enter any Number : ";
    cin >> i;
    if (i < 0)
    {

    break;
    
    }
    sum = sum + i;

}
cout << " sum = " << sum;
}