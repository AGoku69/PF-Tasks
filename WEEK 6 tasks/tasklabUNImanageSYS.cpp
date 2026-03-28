#include <iostream>
using namespace std;
main() 
{
    string CORRECT_USER = "admin";
    string CORRECT_PASS = "1234";
    string loginAttempts[3];
    int n, j;
    cout << "Enter the maximum number of students: ";
    cin >> n;
    cout << "Enter the maximum number of courses: ";
    cin >> j;
    string studentNames[n];
    int studentAges[n];
    string courseNames[j];
    int studentCount = 0;
    int courseCount = 0;
    bool isAuthenticated = false;
    cout << "\n=== University Management System Login ===" << endl;
    for (int i = 0; i < 3; i++) 
    {
        string inputPass;
        cout << "\nAttempt " << i + 1 << endl;
        cout << "Username: ";
        cin >> loginAttempts[i];
        cout << "Password: ";
        cin >> inputPass;
        if (loginAttempts[i] == CORRECT_USER && inputPass == CORRECT_PASS) 
        {
            isAuthenticated = true;
            cout << "Login Successful!" << endl;
            break; 
        } 
        else 
        {
            cout << "Invalid credentials.";
            if (i == 2) 
            {
                cout << "\nAccount Locked. Too many attempts." << endl;
            } 
            else 
            {
                cout << " Try again." << endl;
            }
        }
    }
    if (isAuthenticated) 
    {
        int choice;
        while (true) 
        {
            cout << "\n--- MAIN MENU ---" << endl;
            cout << "1 -> Add Student" << endl;
            cout << "2 -> View Students" << endl;
            cout << "3 -> Add Course" << endl;
            cout << "4 -> View Courses" << endl;
            cout << "5 -> Exit" << endl;
            cout << "Select option: ";
            cin >> choice;
            if (choice == 5) 
            {
                cout << "Terminating System..." << endl;
                break;
            }
            else if (choice == 1) 
            {
                if (studentCount < n) 
                {
                    cout << "Enter Student Name: ";
                    getline(cin >> ws, studentNames[studentCount]);
                    cout << "Enter Student Age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                    cout << "Student added successfully!" << endl;
                } else 
                {
                    cout << "Error: Student limit reached (Max " << n << ")." << endl;
                }
            }
            else if (choice == 2) 
            {
                if (studentCount == 0) 
                {
                    cout << "No students registered yet." << endl;
                } else 
                {
                    cout << "\n--- Student List ---" << endl;
                    for (int i = 0; i < studentCount; i++) 
                    {
                        cout << i + 1 << ". Name: " << studentNames[i] << " | Age: " << studentAges[i] << endl;
                    }
                }
            }
            else if (choice == 3) {
                if (courseCount < j) 
                {
                    cout << "Enter Course Name: ";
                    getline(cin >> ws, courseNames[courseCount]);
                    courseCount++;
                    cout << "Course added successfully!" << endl;
                } 
                else 
                {
                    cout << "Error: Course limit reached (Max " << j << ")." << endl;
                }
            }
            else if (choice == 4) 
            {
                if (courseCount == 0) 
                {
                    cout << "No courses available yet." << endl;
                } else 
                {
                    cout << "\n--- Course List ---" << endl;
                    for (int i = 0; i < courseCount; i++) 
                    {
                        cout << i + 1 << ". " << courseNames[i] << endl;
                    }
                }
            }
            else 
            {
                cout << "Invalid selection. Please use 1-5." << endl;
            }
        }
    } 
    else 
    {
        cout << "\nToo many incorrect attempts. Your account has been locked." << endl;
    }
}