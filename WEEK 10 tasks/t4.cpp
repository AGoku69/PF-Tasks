#include <iostream>
using namespace std;
float calculateHeight(double distance, double angle) 
{
    // Convert angle from degrees to radians
    float radian = angle / 57.2958;
    // Approximate tan(x) ≈ x + x^3/3
    float tanValue = radian + (radian * radian * radian) / 3;
    // Height formula
    float height = distance * tanValue;
    return height;
}
main() 
{
    float distance, angle, height;
    cout << "Enter distance from tree (in feet): ";
    cin >> distance;
    cout << "Enter angle of elevation (in degrees): ";
    cin >> angle;
    height = calculateHeight(distance, angle);
    cout << "Estimated height of tree = " << height << " feet" << endl;
}