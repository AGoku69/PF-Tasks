#include<iostream>
using namespace std;
// Function to calculate final salary
float calculateSalary(float base, int score, int experience)
{
    float bonusPercent = 0;
 
    // Bonus based on score
    if (score >= 90)
        bonusPercent = 20;
    else if (score >= 75)
        bonusPercent = 10;
    else
        bonusPercent = 5;
 
    // Extra bonus for experience >= 5 years
    if (experience >= 5)
        bonusPercent += 5;
 
    float bonus = base * (bonusPercent / 100);
    float finalSalary = base + bonus;
 
    return finalSalary;
}
main()
{
    float base;
    int score, experience;
 
    cout << "Enter base, score and experience in years: " << endl;
    cin >> base >> score >> experience;
 
    float finalSalary = calculateSalary(base, score, experience);
 
    cout << "Final Salary: " << finalSalary << endl;
}