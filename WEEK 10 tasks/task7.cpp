#include<iostream>
using namespace std;
// Function to calculate updated balance after interest
float calculateBalance(float balance, int years)
{
    float interestPercent = 0;
 
    // Interest based on balance
    if (balance < 10000)
        interestPercent = 5;
    else if (balance <= 50000)
        interestPercent = 7;
    else
        interestPercent = 10;
 
    // Extra 2% if years >= 3
    if (years >= 3)
        interestPercent += 2;
 
    float interest = balance * (interestPercent / 100);
    float updatedBalance = balance + interest;
 
    return updatedBalance;
}
main()
{
    float balance;
    int years;
 
    cout << "Enter Balance and years: " << endl;
    cin >> balance >> years;
 
    float updatedBalance = calculateBalance(balance, years);
 
    cout << "Updated Balance: " << updatedBalance << endl;
}