#include<iostream>
using namespace std;
// Function to convert meters to target unit
double convertUnit(double meters, string unit)
{
    if (unit == "millimeters")
        return meters * 1000;
    else if (unit == "centimeters")
        return meters * 100;
    else if (unit == "kilometers")
        return meters / 1000;
    else
        return meters; // meters
}
string pyramidVolume(double length, double width, double height, string unit)
{
    // Convert all dimensions to target unit
    double l = convertUnit(length, unit);
    double w = convertUnit(width, unit);
    double h = convertUnit(height, unit);
    // Volume of pyramid = (1/3) * length * width * height
    double volume = (1.0 / 3.0) * l * w * h;
    // Build result string
    // Use a string stream to format with 3 decimal places
    char buffer[100];
    sprintf(buffer, "%.3f cubic %s", volume, unit.c_str());
    return string(buffer);
}
int main()
{
    float length, width, height;
    string unit;
    cout << "Enter length, width, height (in meters): ";
    cin >> length >> width >> height;
    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    cout << pyramidVolume(length, width, height, unit) << endl;
}