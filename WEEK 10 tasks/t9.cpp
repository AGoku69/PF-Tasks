#include <iostream>
using namespace std;
string timeTravel(int hour, int minute) 
{
    minute = minute + 15;
    // Handle minute overflow
    if (minute >= 60) 
    {
        hour = hour + (minute / 60);
        minute = minute % 60;
    }
    // Handle hour overflow (24-hour format)
    if (hour >= 24) 
    {
        hour = hour % 24;
    }
    // Convert to proper string format
    string result = to_string(hour) + ":" + to_string(minute);
    return result;
}
main() 
{
    int hour, minute;
    string result;
    cout << "Enter current hour (0-23): ";
    cin >> hour;
    cout << "Enter current minute (0-59): ";
    cin >> minute;
    result = timeTravel(hour, minute);
    cout << result << endl;
}