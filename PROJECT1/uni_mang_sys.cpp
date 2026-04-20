#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalStudents = 10000; // Maximum number of students that can be registered in the system
    int index = 8;             // To keep track of the number of students registered
    // Data structures to hold student information
    string studentNamesArray[totalStudents] = {"abdul", "wajid", "zarin", "hassan", "fatima", "zain", "areej", "ahmed"};
    int studentAgesArray[totalStudents] = {20, 21, 19, 20, 19, 22, 18, 21};
    float matricMarksArray[totalStudents] = {780, 876, 990, 850, 920, 710, 1010, 880};
    float interMarksArray[totalStudents] = {876, 980, 1150, 900, 1005, 780, 1050, 910};
    float ecatMarksArray[totalStudents] = {243, 260, 300, 210, 285, 190, 320, 240};
    float aggregateMarksArray[totalStudents]; // To be calculated
    // Preferences (Assuming they all have similar interests for now)
    string preference1Array[totalStudents] = {"CS", "CS", "CS", "SE", "CS", "EE", "CS", "SE"};
    string preference2Array[totalStudents] = {"EE", "EE", "EE", "CS", "SE", "SE", "SE", "CS"};
    string preference3Array[totalStudents] = {"SE", "SE", "SE", "EE", "EE", "CE", "EE", "EE"};
    string studentAdmissions[totalStudents] = {"CS", "CS", "EE", "SE", "SE", "EE", "SE", "EE"};
    while (true)
    {
        // Display welcome message and main menu options
        system("cls"); // Clear the console screen for better readability
        cout << "\n";
        cout << "_____________________________________________________________________" << endl;
        cout << "|___________________________________________________________________|" << endl;
        cout << "|-------------------------------------------------------------------|" << endl;
        cout << "|---------- Welcome to the University Management System! -----------|" << endl;
        cout << "|-------------------------------------------------------------------|" << endl;
        cout << "|___________________________________________________________________|" << endl;
        cout << "\n";

        cout << " USER MENU: " << endl;
        cout << " Login to System " << endl;
        cout << " 1 -> Login as Admin " << endl;
        cout << " 2 -> Login as Student " << endl;
        cout << " 3 -> Exit " << endl;
        cout << " Choose an Option: ";
        string userChoice;
        cin >> userChoice;
        cout << "\nYou selected option : " << userChoice << "." << endl;

        if (userChoice == "1")
        {
            int adminAttempts = 0;
            system("cls"); // Clear the console screen for better readability
            // Call admin login function
            cout << "_______________________________________" << endl;
            cout << "|_____________________________________|" << endl;
            cout << "|-------- Admin Login Selected -------|" << endl;
            cout << "|-------------------------------------|" << endl;
            cout << "|-----------=> Admin Menu <=----------|" << endl;
            cout << "|------ you are in admin login -------|" << endl;
            cout << "|-------------------------------------|" << endl;
            cout << "|-- Welcome to the UMS Admin Panel! --|" << endl;
            cout << "|-------------------------------------|" << endl;
            cout << "|_____________________________________|" << endl;
            cout << "|------ Press any key to Login -------|" << endl;
            cout << "|_____________________________________|" << endl;
            getch();
            for (adminAttempts = 0; adminAttempts < 3; adminAttempts++)
            {
                system("cls"); // Clear the console screen for better readability
                cout << "Attempt " << adminAttempts + 1 << " - " << endl;
                cout << "Enter your credentials to login:" << endl;
                cout << "Enter Admin Username: ";
                string adminUsername;
                cin >> adminUsername;
                cout << "Enter Admin Password: ";
                string adminPassword;
                cin >> adminPassword;
                if (adminUsername == "admin" && adminPassword == "1234")
                {
                    system("cls"); // Clear the console screen for better readability
                    cout << "---- Admin login successful! ----" << endl;
                    while (true)
                    {
                        system("cls"); // Clear the console screen for better readability
                        cout << "___________________________________" << endl;
                        cout << "|_________________________________|" << endl;
                        cout << "|---------------------------------|" << endl;
                        cout << "|-- Welcome to the Admin Panel! --|" << endl;
                        cout << "|---------------------------------|" << endl;
                        cout << "|_________________________________|" << endl;
                        cout << "1 -> Show All Students " << endl;
                        cout << "2 -> Search Students " << endl;
                        cout << "3 -> Update Student Information " << endl;
                        cout << "4 -> Generate Student Merit List " << endl;
                        cout << "5 -> Delete Student " << endl;
                        cout << "6 -> Logout " << endl;
                        cout << "Select an option: ";
                        string adminChoice;
                        cin >> adminChoice;
                        cout << "\nYou selected option : " << adminChoice << "." << endl;
                        if (adminChoice == "1")
                        {
                            // show all students
                            cout << "Total Registered Students: " << index << endl;
                            cout << "--- Student List ---" << endl;
                            cout << "No. |\t Name \t| Age |Matric Marks | Inter Marks | ECAT Marks | Preference 1 | Preference 2 | Preference 3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (studentNamesArray[i] != " ")
                                {
                                    cout << i + 1 << " |\t " << studentNamesArray[i] << "\t| " << studentAgesArray[i] << "\t| "
                                         << matricMarksArray[i] << " \t| " << interMarksArray[i] << " \t| " << ecatMarksArray[i]
                                         << " \t| " << preference1Array[i] << " \t| " << preference2Array[i]
                                         << " \t| " << preference3Array[i] << endl;
                                }
                            }
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "2")
                        {
                            // search student by name
                            cout << "Enter student name to search: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (studentNamesArray[i] == searchName)
                                {
                                    found = true;
                                    foundIndex = i;
                                    break;
                                }
                            }
                            if (found)
                            {
                                cout << "No. |\t Name \t| Age |Matric Marks | Inter Marks | ECAT Marks | Preference 1 | Preference 2 | Preference 3" << endl;
                                cout << foundIndex + 1 << " |\t " << studentNamesArray[foundIndex] << "\t| " << studentAgesArray[foundIndex] << "\t| "
                                     << matricMarksArray[foundIndex] << " \t| " << interMarksArray[foundIndex] << " \t| " << ecatMarksArray[foundIndex]
                                     << " \t| " << preference1Array[foundIndex] << " \t| " << preference2Array[foundIndex]
                                     << " \t| " << preference3Array[foundIndex] << endl;
                            }
                            else
                            {
                                cout << "Student not found." << endl;
                                cout << "try again..." << endl;
                            }
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "3")
                        {
                            // update student information
                            cout << "Enter student name to update record of : ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (studentNamesArray[i] == searchName)
                                {
                                    found = true;
                                    foundIndex = i;
                                    break;
                                }
                            }
                            if (found)
                            {
                                cout << "Old record of student : " << endl;
                                cout << "No. |\t Name \t| Age |Matric Marks | Inter Marks | ECAT Marks | Preference 1 | Preference 2 | Preference 3" << endl;
                                cout << foundIndex + 1 << " |\t " << studentNamesArray[foundIndex] << "\t| " << studentAgesArray[foundIndex] << "\t| "
                                     << matricMarksArray[foundIndex] << " \t| " << interMarksArray[foundIndex] << " \t| " << ecatMarksArray[foundIndex]
                                     << " \t| " << preference1Array[foundIndex] << " \t| " << preference2Array[foundIndex]
                                     << " \t| " << preference3Array[foundIndex] << endl;
                                cout << "Enter new details for the student:" << endl;
                                cout << "Name: ";
                                string name;
                                cin >> name;
                                cout << "Age: ";
                                int age;
                                cin >> age;
                                cout << "Matric Marks: ";
                                float matricMarks;
                                cin >> matricMarks;
                                cout << "Inter Marks: ";
                                float interMarks;
                                cin >> interMarks;
                                cout << "ECAT Marks: ";
                                float ecatMarks;
                                cin >> ecatMarks;
                                string pref1, pref2, pref3;
                                cout << "Enter CS , SE , and EE as your Preferences : " << endl;
                                while (true)
                                {
                                    cout << "Enter your Preference 1: ";
                                    cin >> pref1;
                                    if (pref1 == "CS" || pref1 == "SE" || pref1 == "EE")
                                    {
                                        break; // Valid input, exit the loop
                                    }
                                    else
                                    {
                                        cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                                    }
                                }
                                while (true)
                                {
                                    cout << "Enter your Preference 2: ";
                                    cin >> pref2;
                                    if (pref2 == "CS" || pref2 == "SE" || pref2 == "EE")
                                    {
                                        break; // Valid input, exit the loop
                                    }
                                    else
                                    {
                                        cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                                    }
                                }
                                while (true)
                                {
                                    cout << "Enter your Preference 3: ";
                                    cin >> pref3;
                                    if (pref3 == "CS" || pref3 == "SE" || pref3 == "EE")
                                    {
                                        break; // Valid input, exit the loop
                                    }
                                    else
                                    {
                                        cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                                    }
                                }
                                studentNamesArray[foundIndex] = name;
                                studentAgesArray[foundIndex] = age;
                                matricMarksArray[foundIndex] = matricMarks;
                                interMarksArray[foundIndex] = interMarks;
                                ecatMarksArray[foundIndex] = ecatMarks;
                                preference1Array[foundIndex] = pref1;
                                preference2Array[foundIndex] = pref2;
                                preference3Array[foundIndex] = pref3;
                            }
                            else
                            {
                                cout << "Student not found." << endl;
                                cout << "try again..." << endl;
                            }
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "4")
                        {
                            // generate student merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggrecate = matricMarksArray[i] / 1050.0 * 100.0 * 0.3 + interMarksArray[i] / 1100.0 * 100.0 * 0.4 + ecatMarksArray[i] / 400.0 * 100.0 * 0.3;
                                aggregateMarksArray[i] = aggrecate;
                            }
                            // Sorting data on the bases of aggrecate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggregateMarksArray[i] < aggregateMarksArray[j])
                                    {
                                        // Swapping of name
                                        string tempName = studentNamesArray[i];
                                        studentNamesArray[i] = studentNamesArray[j];
                                        studentNamesArray[j] = tempName;
                                        // Swapping of age
                                        int tempAge = studentAgesArray[i];
                                        studentAgesArray[i] = studentAgesArray[j];
                                        studentAgesArray[j] = tempAge;
                                        // Swapping of matric
                                        float tempMatric = matricMarksArray[i];
                                        matricMarksArray[i] = matricMarksArray[j];
                                        matricMarksArray[j] = tempMatric;
                                        // Swapping of inter
                                        float tempInter = interMarksArray[i];
                                        interMarksArray[i] = interMarksArray[j];
                                        interMarksArray[j] = tempInter;
                                        // Swapping of ecat
                                        float tempEcat = ecatMarksArray[i];
                                        ecatMarksArray[i] = ecatMarksArray[j];
                                        ecatMarksArray[j] = tempEcat;
                                        // Swapping of pref1
                                        string tempP1 = preference1Array[i];
                                        preference1Array[i] = preference1Array[j];
                                        preference1Array[j] = tempP1;
                                        // Swapping of pref2
                                        string tempP2 = preference2Array[i];
                                        preference2Array[i] = preference2Array[j];
                                        preference2Array[j] = tempP2;
                                        // Swapping of pref3
                                        string tempP3 = preference3Array[i];
                                        preference3Array[i] = preference3Array[j];
                                        preference3Array[j] = tempP3;
                                        // Swapping of aggregate
                                        float tempAgg = aggregateMarksArray[i];
                                        aggregateMarksArray[i] = aggregateMarksArray[j];
                                        aggregateMarksArray[j] = tempAgg;
                                    }
                                }
                            }
                            // Code to displey all data wiht aggrecate
                            cout << "---------> Student List <---------" << endl;
                            cout << "No. |\t Name \t| Age | Aggrecate |" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (studentNamesArray[i] != " ")
                                {
                                    cout << i + 1 << " |\t " << studentNamesArray[i] << "\t| " << studentAgesArray[i] << "\t| " << aggregateMarksArray[i] << endl;
                                }
                            }
                            // Code to store studets into accodring diciplines
                            // --- NEW LOGIC FOR ADMISSIONS ---
                            int csSeats = 2, seSeats = 10, eeSeats = 3; // Define capacities for each department

                            for (int i = 0; i < index; i++)
                            {
                                // Check Preference 1
                                if (preference1Array[i] == "CS" && csSeats > 0)
                                {
                                    studentAdmissions[i] = "CS";
                                    csSeats--;
                                }
                                else if (preference1Array[i] == "SE" && seSeats > 0)
                                {
                                    studentAdmissions[i] = "SE";
                                    seSeats--;
                                }
                                else if (preference1Array[i] == "EE" && eeSeats > 0)
                                {
                                    studentAdmissions[i] = "EE";
                                    eeSeats--;
                                }
                                // If Pref 1 is full, Check Preference 2
                                else if (preference2Array[i] == "CS" && csSeats > 0)
                                {
                                    studentAdmissions[i] = "CS";
                                    csSeats--;
                                }
                                else if (preference2Array[i] == "SE" && seSeats > 0)
                                {
                                    studentAdmissions[i] = "SE";
                                    seSeats--;
                                }
                                else if (preference2Array[i] == "EE" && eeSeats > 0)
                                {
                                    studentAdmissions[i] = "EE";
                                    eeSeats--;
                                }
                                // If Pref 2 is full, Check Preference 3
                                else if (preference3Array[i] == "CS" && csSeats > 0)
                                {
                                    studentAdmissions[i] = "CS";
                                    csSeats--;
                                }
                                else if (preference3Array[i] == "SE" && seSeats > 0)
                                {
                                    studentAdmissions[i] = "SE";
                                    seSeats--;
                                }
                                else if (preference3Array[i] == "EE" && eeSeats > 0)
                                {
                                    studentAdmissions[i] = "EE";
                                    eeSeats--;
                                }
                                else
                                {
                                    studentAdmissions[i] = "Not Admitted";
                                }
                            }
                            // Display the Result
                            cout << "-------> Admission Results <-------" << endl;
                            cout << "No. |\t Name \t| Aggregate | Status" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (studentNamesArray[i] != "")
                                {
                                    cout << i + 1 << " |\t " << studentNamesArray[i] << "\t| "
                                         << aggregateMarksArray[i] << " \t| " << studentAdmissions[i] << endl;
                                }
                            }

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "5")
                        {
                            // delete student record
                            cout << "Enter student name to Delet the record of : ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (studentNamesArray[i] == searchName)
                                {
                                    found = true;
                                    foundIndex = i;
                                    break;
                                }
                            }
                            if (found)
                            {
                                studentNamesArray[foundIndex] = "";
                                studentAgesArray[foundIndex] = 0;
                                matricMarksArray[foundIndex] = 0;
                                interMarksArray[foundIndex] = 0;
                                ecatMarksArray[foundIndex] = 0;
                                preference1Array[foundIndex] = "";
                                preference2Array[foundIndex] = "";
                                preference3Array[foundIndex] = "";
                                cout << " Record of " << searchName << " Deleted " << endl;
                            }
                            else
                            {
                                cout << "Student not found." << endl;
                                cout << "try again..." << endl;
                            }
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "6")
                        {
                            cout << "Logging out from Admin Panel..." << endl;
                            cout << "Press Enter to confirm logout." << endl;
                            getch(); // Wait for user input before logging out
                            break;   // Exit the admin menu loop to return to the main menu
                        }
                        else
                        {
                            cout << "Invalid option selected. Please choose between 1-6." << endl;
                            cout << " Try again..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                    }
                    cout << "Press any key to return to the main menu..." << endl;
                    getch(); // Wait for user input before proceeding to the admin menu
                    break;   // Exit the loop on successful login
                }
                else
                {
                    cout << "Invalid credentials. " << endl;
                    if (adminAttempts < 2)
                    {
                        cout << "Try again." << endl;
                        getch(); // Wait for user input before the next attempt
                    }
                    else
                    {
                        cout << "\nAccount Locked. Too many attempts." << endl;
                        getch(); // Wait for user input before exiting
                    }
                }
            }
        }
        else if (userChoice == "2")
        {
            system("cls"); // Clear the console screen for better readability
            // Call student login function
            cout << "____________________________________" << endl;
            cout << "|__________________________________|" << endl;
            cout << "|----- Student Login Selected -----|" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|--------=> Student Menu <=--------|" << endl;
            cout << "|---- you are in student login ----|" << endl;
            cout << "|----------------------------------|" << endl;
            cout << "|------- Welcome to the UMS -------|" << endl;
            cout << "|--------- Student Panel! ---------|" << endl;
            cout << "|__________________________________|" << endl;
            cout << "Enter your details to register:" << endl;
            cout << "Name: ";
            string name;
            cin >> name;
            cout << "Age: ";
            int age;
            cin >> age;
            cout << "Matric Marks: ";
            float matricMarks;
            cin >> matricMarks;
            cout << "Inter Marks: ";
            float interMarks;
            cin >> interMarks;
            cout << "ECAT Marks: ";
            float ecatMarks;
            cin >> ecatMarks;
            string pref1, pref2, pref3;
            cout << "Enter CS , SE , and EE as your Preferences : " << endl;
            while (true)
            {
                cout << "Enter your Preference 1: ";
                cin >> pref1;
                if (pref1 == "CS" || pref1 == "SE" || pref1 == "EE")
                {
                    break; // Valid input, exit the loop
                }
                else
                {
                    cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                }
            }
            while (true)
            {
                cout << "Enter your Preference 2: ";
                cin >> pref2;
                if (pref2 == "CS" || pref2 == "SE" || pref2 == "EE")
                {
                    break; // Valid input, exit the loop
                }
                else
                {
                    cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                }
            }
            while (true)
            {
                cout << "Enter your Preference 3: ";
                cin >> pref3;
                if (pref3 == "CS" || pref3 == "SE" || pref3 == "EE")
                {
                    break; // Valid input, exit the loop
                }
                else
                {
                    cout << "Invalid preference. Please enter CS, SE, or EE." << endl;
                }
            }

            studentNamesArray[index] = name;
            studentAgesArray[index] = age;
            matricMarksArray[index] = matricMarks;
            interMarksArray[index] = interMarks;
            ecatMarksArray[index] = ecatMarks;
            preference1Array[index] = pref1;
            preference2Array[index] = pref2;
            preference3Array[index] = pref3;
            index++; // Increment the index for the next student registration
            cout << "Student registered successfully!" << endl;
            cout << "Press any key to return to the main menu..." << endl;

            getch();
        }
        else if (userChoice == "3")
        {
            cout << "Exiting System. Goodbye!" << endl;
            break; // Exit the loop and end the program
            getch();
        }
        else if (userChoice >= "4")
        {
            cout << "Invalid option selected. Exiting..." << endl;
            cout << " Try again...." << endl;
            getch();
        }
    }
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Thank you for using the University Management System. Have a great day!" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
}