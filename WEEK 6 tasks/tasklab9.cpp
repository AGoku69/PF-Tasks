#include <iostream>
using namespace std;
main() 
{
    int coins[4]; // quarters, dimes, nickels, pennies
    float due;
    cout << "Enter coins (quarters, dimes, nickels, pennies): ";
    for(int i = 0; i < 4; i++) 
    {
        cin >> coins[i];
    }
    cout << "Enter total due: ";
    cin >> due;
    // Calculate total money
    float total = coins[0] * 0.25 + coins[1] * 0.10 + coins[2] * 0.05 + coins[3] * 0.01;
    // Check if enough
    if(total >= due) 
    {
        cout << "true";
    } else 
    {
        cout << "false";
    }

}