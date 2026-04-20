#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // To keep track of the number of Candidats,Voters And History registered
    int index = 0;

    // --- Candidate arrays (max 50 candidates) ---
    int totalCandidates = 50;
    string candidateName[totalCandidates];
    string partyName[totalCandidates];
    string candidateID[totalCandidates];
    int voteCount[totalCandidates];
    int isActive[totalCandidates]; // 1 = active, 0 = deleted

    // --- Voter arrays (max 500 voters) ---
    int totalVoters = 500;
    string voterID[totalVoters];
    string voterName[totalVoters];
    int hasVoted[totalVoters];    // 0 = not voted, 1 = voted
    string votedFor[totalVoters]; // stores candidateID chosen

    // --- History arrays (max 200 events) ---
    int totalHistory = 200;
    string historyLog[totalHistory];
    string historyDate[totalHistory];

    // --- Election flag ---
    int electionOpen = 1; // 1 = open, 0 = closed

    while (true)
    {
        // Display welcome message and main menu options
        system("cls"); // Clear the console screen for better readability
        cout << "________________________________________________________________________" << endl;
        cout << "|______________________________________________________________________|" << endl;
        cout << "|------------------ Developed By : Abdullah Huda ----------------------|" << endl;
        cout << "|--------------------- Roll NO : 2026(S)-GA-015 -----------------------|" << endl;
        cout << "|----------------------------------------------------------------------|" << endl;
        cout << "|______________________________________________________________________|" << endl;
        cout << "\n";
        cout << "________________________________________________________________________" << endl;
        cout << "|______________________________________________________________________|" << endl;
        cout << "|----------------------------------------------------------------------|" << endl;
        cout << "|---------- Welcome to VOTING & ELECTION Management System! -----------|" << endl;
        cout << "|----------------------------------------------------------------------|" << endl;
        cout << "|______________________________________________________________________|" << endl;
        cout << "\n";
        cout << "________________________________________________________________________" << endl;
        cout << "|______________________________________________________________________|" << endl;
        cout << "||______________________ ~~~~~( USER MENU )~~~~~ _____________________||" << endl;
        cout << "|----------------------------------------------------------------------|" << endl;
        cout << "|______________________________________________________________________|" << endl;
        cout << "||-----------------------   Login to System   ------------------------||" << endl;
        cout << "|| 1 ------> Login as Admin (Election Officer)                        ||" << endl;
        cout << "|| 2 ------> Login as Voter (Registered Citizen)                      ||" << endl;
        cout << "|| 3 ------> Exit                                                     ||" << endl;
        cout << "||____________________________________________________________________||" << endl;
        cout << "|| Choose an Option: ";
        string userChoice;
        cin >> userChoice;
        cout << "\nYou selected option : " << userChoice << "." << endl;
        if (userChoice == "1")
        {
            // enter the admin code here
            int adminAttempts;
            system("cls"); // Clear the console screen for better readability
            // Call admin (Election Officer) login function
            cout << "___________________________________________________________" << endl;
            cout << "|_________________________________________________________|" << endl;
            cout << "|-------- Admin (Election Officer) Login Selected --------|" << endl;
            cout << "|---------------------------------------------------------|" << endl;
            cout << "|--------------=> (Election Officer) Menu <=--------------|" << endl;
            cout << "|---------- you are in (Election Officer) login ----------|" << endl;
            cout << "|---------------------------------------------------------|" << endl;
            cout << "|---- Welcome to the V&E_MS (Election Officer) Panel! ----|" << endl;
            cout << "|---------------------------------------------------------|" << endl;
            cout << "|_________________________________________________________|" << endl;
            cout << "|---------------- Press any key to Login -----------------|" << endl;
            cout << "|_________________________________________________________|" << endl;
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
                    cout << "______________________________________________________" << endl;
                    cout << "|____________________________________________________|" << endl;
                    cout << "|----------------------------------------------------|" << endl;
                    cout << "|---- Admin (Election Officer) login successful! ----|" << endl;
                    cout << "|----------------------------------------------------|" << endl;
                    cout << "|____________________________________________________|" << endl;
                    while (true)
                    {
                        system("cls"); // Clear the console screen for better readability
                        cout << "______________________________________________________" << endl;
                        cout << "|____________________________________________________|" << endl;
                        cout << "|----------------------------------------------------|" << endl;
                        cout << "|-- Welcome to the Admin (Election Officer) Panel! --|" << endl;
                        cout << "|----------------------------------------------------|" << endl;
                        cout << "|____________________________________________________|" << endl;
                        cout << "1 -> Add New Candidate " << endl;
                        cout << "2 -> Delet a Candidate  " << endl;
                        cout << "3 -> Update Candidate Details " << endl;
                        cout << "4 -> View All Candidates " << endl;
                        cout << "5 -> View Vote Candidates " << endl;
                        cout << "6 -> Sort by Votes " << endl;
                        cout << "7 -> Declare Winner " << endl;
                        cout << "8 -> View Voting History Log " << endl;
                        cout << "9 -> Reset Election Data " << endl;
                        cout << "10 -> Exit the Admin (Election Officer) Panel! " << endl;
                        cout << "Select an option: ";
                        string adminChoice;
                        cin >> adminChoice;
                        cout << "\nYou selected option : " << adminChoice << "." << endl;
                        if (adminChoice == "1")
                        {
                            
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "2")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "3")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "4")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "5")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "6")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "7")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "8")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }
                        else if (adminChoice == "9")
                        {
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch(); // Wait for user input before showing the admin menu again
                        }

                        else if (adminChoice == "10")
                        {
                            cout << "Logging out from Admin (Election Officer) Panel..." << endl;
                            cout << "Press Enter to confirm logout..." << endl;
                            getch(); // Wait for user input before logging out
                            break;   // Exit the admin menu loop to return to the main menu
                        }
                        else
                        {
                            cout << "Invalid option selected. Please choose between 1-10..." << endl;
                            cout << " Try again..." << endl;
                            cout << "Press any key to return to the admin menu..." << endl;
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
                        cout << "Press any key to continue..." << endl;
                        getch(); // Wait for user input before the next attempt
                    }
                    else
                    {
                        cout << "\nAccount Locked. Too many attempts." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch(); // Wait for user input before exiting
                    }
                }
            }
        }
        else if (userChoice == "2")
        {
            // enter tehe voter code here
            int voterAttempts;
            system("cls"); // Clear the console screen for better readability
            // Call Voter login function
            cout << "_________________________________________________________" << endl;
            cout << "|_______________________________________________________|" << endl;
            cout << "|------ Voter (Registered Citizen) Login Selected ------|" << endl;
            cout << "|-------------------------------------------------------|" << endl;
            cout << "|---------=> Voter (Registered Citizen) Menu <=---------|" << endl;
            cout << "|----- you are in Voter (Registered Citizen) login -----|" << endl;
            cout << "|-------------------------------------------------------|" << endl;
            cout << "|---------------- Welcome to the V&E_MS ----------------|" << endl;
            cout << "|---------- Voter (Registered Citizen) Panel! ----------|" << endl;
            cout << "|_______________________________________________________|" << endl;
            cout << "|--------------- Press any key to Login ---------=------|" << endl;
            cout << "|_______________________________________________________|" << endl;
            getch();
            for (voterAttempts = 0; voterAttempts < 3; voterAttempts++)
            {
                system("cls"); // Clear the console screen for better readability
                cout << "Attempt " << voterAttempts + 1 << " - " << endl;
                cout << "Enter your credentials to login:" << endl;
                cout << "Enter Voter Username: ";
                string voterUsername;
                cin >> voterUsername;
                cout << "Enter Voter Password: ";
                string voterPassword;
                cin >> voterPassword;
                if (voterUsername == "voter" && voterPassword == "9876")
                {
                    system("cls"); // Clear the console screen for better readability
                    cout << "________________________________________________________" << endl;
                    cout << "|______________________________________________________|" << endl;
                    cout << "|------------------------------------------------------|" << endl;
                    cout << "|---- Voter (Registered Citizen) login successful! ----|" << endl;
                    cout << "|------------------------------------------------------|" << endl;
                    cout << "|______________________________________________________|" << endl;
                    while (true)
                    {
                        system("cls"); // Clear the console screen for better readability
                        cout << "________________________________________________________" << endl;
                        cout << "|______________________________________________________|" << endl;
                        cout << "|------------------------------------------------------|" << endl;
                        cout << "|-- Welcome to the Voter (Registered Citizen) Panel! --|" << endl;
                        cout << "|------------------------------------------------------|" << endl;
                        cout << "|______________________________________________________|" << endl;
                        cout << "1 -> Register As a New Voter " << endl;
                        cout << "2 -> Cast Your Vote " << endl;
                        cout << "3 -> View All Candidates " << endl;
                        cout << "4 -> Search Candidates by Name " << endl;
                        cout << "5 -> View Current Standings " << endl;
                        cout << "6 -> Sort Candidates by Names " << endl;
                        cout << "7 -> Check If you Voted " << endl;
                        cout << "8 -> View Party-Wise Summary " << endl;
                        cout << "9 -> View Winner Announcment  " << endl;
                        cout << "10 -> Exsit the Voter (Registered Citizen) Panel! " << endl;
                        cout << "Select an option: ";
                        string voterChoice;
                        cin >> voterChoice;
                        cout << "\nYou selected option : " << voterChoice << "." << endl;
                        if (voterChoice == "1")
                        {   
                            system("cls");
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "2")
                        {
                            system("cls");
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "3")
                        {
                            system("cls");
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "4")
                        {
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "5")
                        {
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "6")
                        {
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "7")
                        {
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "8")
                        {
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                        else if (voterChoice == "9")
                        {
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }

                        else if (voterChoice == "10")
                        {
                            cout << "Logging out from voter (Registered Citizen) Panel..." << endl;
                            cout << "Press Enter to confirm logout." << endl;
                            getch(); // Wait for user input before logging out
                            break;   // Exit the voter menu loop to return to the main menu
                        }
                        else
                        {
                            cout << "Invalid option selected. Please choose between 1-10." << endl;
                            cout << " Try again..." << endl;
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch(); // Wait for user input before showing the voter menu again
                        }
                    }
                    cout << "Press any key to return to the main menu..." << endl;
                    getch(); // Wait for user input before proceeding to the voter menu
                    break;   // Exit the loop on successful login
                }
                else
                {
                    cout << "Invalid credentials. " << endl;
                    if (voterAttempts < 2)
                    {
                        cout << "Try again." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch(); // Wait for user input before the next attempt
                    }
                    else
                    {
                        cout << "\nAccount Locked. Too many attempts." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch(); // Wait for user input before exiting
                    }
                }
            }
        }
        else if (userChoice == "3")
        {
            cout << "Exiting The Voting System. Goodbye!" << endl;
            break; // Exit the loop and end the program
        }
        else if (userChoice >= "4")
        {
            cout << "Invalid option selected. Exiting..." << endl;
            cout << "Try again...." << endl;
            cout << "enter any key to cont...." << endl;
            getch(); // Wait for user input before trying again
        }
    }
    cout << "\n";
    cout << "___________________________________________________________________________" << endl;
    cout << "|_________________________________________________________________________|" << endl;
    cout << "|-------------------------------------------------------------------------|" << endl;
    cout << "|  Thank you for using the Election Management System. Have a great day!  |" << endl;
    cout << "|-------------------------------------------------------------------------|" << endl;
    cout << "|_________________________________________________________________________|" << endl;
}