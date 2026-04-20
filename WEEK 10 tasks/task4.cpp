#include<iostream>
#include<cmath>
using namespace std;
// Function to calculate if firm can finish project on time
string projectTimeCalculation(int neededHours, int days, int workers)
{
    // 10% of days are training days, so working days = 90% of days
    int workingDays = days - (days * 10 / 100);
    // Each worker works 8 + 2 = 10 hours per day
    int hoursPerDay = 10;
    // Total hours available = working days * hours per day * workers
    int totalHours = workingDays * hoursPerDay * workers;
    int diff = totalHours - neededHours;
    if (diff >= 0)
    {
        return "Yes!" + to_string(diff) + " hours left.";
    }
    else
    {
        return "Not enough time!" + to_string(-diff) + " hours needed.";
    }
}
main()
{
    int neededHours, days, workers;
    cout << "Enter needed hours: ";
    cin >> neededHours;
    cout << "Enter number of days of firm: ";
    cin >> days;
    cout << "Enter number of workers: ";
    cin >> workers;
    cout << projectTimeCalculation(neededHours, days, workers) << endl;
}