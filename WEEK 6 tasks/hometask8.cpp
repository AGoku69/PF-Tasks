#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter the number of flights to track: ";
    cin >> n;
    string flightNumber[n];
    string destination[n];
    int seatsAvailable[n];
    for (int i = 0; i < n; i++)
    {
    cout << "\n--- Flight " << i + 1 << " ---" << endl;
    cout << "Flight Number (e.g., PK301): ";
    cin >> flightNumber[i];
    cout << "Destination: ";
    getline(cin >> ws, destination[i]);
    cout << "Seats Available: ";
    cin >> seatsAvailable[i];
    }
    cout << "\n===============================" << endl;
    cout << "      FULL FLIGHT SCHEDULE     " << endl;
    cout << "===============================" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Flight: " << flightNumber[i] 
             << " | To: " << destination[i] 
             << " | Seats: " << seatsAvailable[i] << endl;
    }
    cout << "\n--- CRITICAL: LOW SEAT ALERTS (< 5) ---" << endl;
    bool foundLow = false;
    for (int i = 0; i < n; i++) 
    {
        if (seatsAvailable[i] < 5) 
        {
            cout << "ALERT: Flight " << flightNumber[i] << " to " << destination[i] 
                 << " has only " << seatsAvailable[i] << " seats left!" << endl;
            foundLow = true;
        }
    }
    if (!foundLow) 
    {
        cout << "No flights currently have critically low seating." << endl;
    }
}