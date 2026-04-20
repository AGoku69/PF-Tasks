#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // To keep track of the number of Candidats,Voters And History registered
    int index = 0;

    // --- Candidate arrays (max 50 candidates) ---
    int totalCandidates = 0;
    string candidateName[50];
    string partyName[50];
    string candidateID[50];
    int voteCount[50];
    int isActive[50]; // 1 = active, 0 = deleted

    // --- Voter arrays (max 500 voters) ---
    int totalVoters = 0;
    string voterID[500];
    string voterName[500];
    int hasVoted[500];    // 0 = not voted, 1 = voted
    string votedFor[500]; // stores candidateID chosen

    // --- History arrays (max 200 events) ---
    int totalHistory = 0;
    string historyLog[200];
    string historyDate[200];

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

                        // ============================================================
                        // ADMIN OPTION 1 — ADD NEW CANDIDATE
                        // ============================================================
                        if (adminChoice == "1")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|-------------- ADD NEW CANDIDATE -------------------|" << endl;
                            cout << "|____________________________________________________|" << endl;

                            if (totalCandidates >= 50)
                            {
                                cout << "| [ERROR] Maximum candidates reached (50).           |" << endl;
                                cout << "| Cannot add more candidates.                        |" << endl;
                            }
                            else
                            {
                                string newCID, newCName, newCParty;
                                cout << "| Enter Candidate ID   : ";
                                cin  >> newCID;

                                // Check for duplicate candidate ID
                                int dupFound = 0;
                                for (int i = 0; i < totalCandidates; i++)
                                {
                                    if (candidateID[i] == newCID && isActive[i] == 1)
                                    {
                                        dupFound = 1;
                                    }
                                }

                                if (dupFound == 1)
                                {
                                    cout << "| [ERROR] Candidate ID already exists.               |" << endl;
                                }
                                else
                                {
                                    cout << "| Enter Candidate Name : ";
                                    cin  >> newCName;
                                    cout << "| Enter Party Name     : ";
                                    cin  >> newCParty;

                                    candidateID[totalCandidates]   = newCID;
                                    candidateName[totalCandidates] = newCName;
                                    partyName[totalCandidates]     = newCParty;
                                    voteCount[totalCandidates]     = 0;
                                    isActive[totalCandidates]      = 1;

                                    // Log to history
                                    historyLog[totalHistory]  = "ADD: Candidate " + newCName + " (ID:" + newCID + ") added to the election.";
                                    historyDate[totalHistory] = "Session";
                                    totalHistory++;
                                    totalCandidates++;

                                    cout << "|____________________________________________________|" << endl;
                                    cout << "| Candidate [ " << newCName << " ] added successfully!  " << endl;
                                    cout << "|____________________________________________________|" << endl;
                                }
                            }

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 2 — DELETE A CANDIDATE
                        // ============================================================
                        else if (adminChoice == "2")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|-------------- DELETE A CANDIDATE ------------------|" << endl;
                            cout << "|____________________________________________________|" << endl;

                            cout << "| Enter Candidate ID to delete: ";
                            string delID;
                            cin  >> delID;

                            int found = -1;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (candidateID[i] == delID && isActive[i] == 1)
                                {
                                    found = i;
                                }
                            }

                            if (found == -1)
                            {
                                cout << "| [ERROR] Candidate not found or already deleted.    |" << endl;
                            }
                            else
                            {
                                isActive[found] = 0; // Logical delete

                                historyLog[totalHistory]  = "DELETE: Candidate " + candidateName[found] + " (ID:" + delID + ") removed.";
                                historyDate[totalHistory] = "Session";
                                totalHistory++;

                                cout << "|____________________________________________________|" << endl;
                                cout << "| Candidate [ " << candidateName[found] << " ] deleted successfully!" << endl;
                                cout << "|____________________________________________________|" << endl;
                            }

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 3 — UPDATE CANDIDATE DETAILS
                        // ============================================================
                        else if (adminChoice == "3")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|------------ UPDATE CANDIDATE DETAILS --------------|" << endl;
                            cout << "|____________________________________________________|" << endl;

                            cout << "| Enter Candidate ID to update: ";
                            string updID;
                            cin  >> updID;

                            int found = -1;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (candidateID[i] == updID && isActive[i] == 1)
                                {
                                    found = i;
                                }
                            }

                            if (found == -1)
                            {
                                cout << "| [ERROR] Candidate not found or inactive.           |" << endl;
                            }
                            else
                            {
                                cout << "| Current Name  : " << candidateName[found] << endl;
                                cout << "| Current Party : " << partyName[found]     << endl;
                                cout << "| Enter new Candidate Name (0 = keep current): ";
                                string newCName;
                                cin  >> newCName;
                                string oldName = candidateName[found];
                                if (newCName != "0")
                                {
                                    candidateName[found] = newCName;
                                }
                                cout << "| Enter new Party Name (0 = keep current): ";
                                string newCParty;
                                cin  >> newCParty;
                                string oldParty = partyName[found];
                                if (newCParty != "0")
                                {
                                    partyName[found] = newCParty;
                                }

                                historyLog[totalHistory]  = "UPDATE: Candidate ID " + updID + " | Old: " + oldName + "/" + oldParty + " -> New: " + candidateName[found] + "/" + partyName[found];
                                historyDate[totalHistory] = "Session";
                                totalHistory++;

                                cout << "|____________________________________________________|" << endl;
                                cout << "| Candidate details updated successfully!            |" << endl;
                                cout << "|____________________________________________________|" << endl;
                            }

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 4 — VIEW ALL CANDIDATES
                        // ============================================================
                        else if (adminChoice == "4")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|--------------- VIEW ALL CANDIDATES ----------------|" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "| ID          | Name         | Party        | Votes  |" << endl;
                            cout << "|-------------|--------------|--------------|--------|" << endl;

                            int activeCount = 0;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    cout << "| " << candidateID[i]   << "\t| "
                                         << candidateName[i] << "\t| "
                                         << partyName[i]     << "\t| "
                                         << voteCount[i]     << "\t |" << endl;
                                    activeCount++;
                                }
                            }

                            if (activeCount == 0)
                            {
                                cout << "| No active candidates found.                        |" << endl;
                            }
                            else
                            {
                                cout << "|____________________________________________________|" << endl;
                                cout << "| Total Active Candidates : " << activeCount << endl;
                            }
                            cout << "|____________________________________________________|" << endl;

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 5 — VIEW VOTE COUNTS
                        // ============================================================
                        else if (adminChoice == "5")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|--------------- VIEW VOTE COUNTS -------------------|" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "| Candidate Name          | Votes                    |" << endl;
                            cout << "|-------------------------|--------------------------|" << endl;

                            // Step 1 : Copy active candidates into temp arrays for display only
                            string tmpName[50];
                            int    tmpVote[50];
                            int    tmpCount = 0;

                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    tmpName[tmpCount] = candidateName[i];
                                    tmpVote[tmpCount] = voteCount[i];
                                    tmpCount++;
                                }
                            }

                            // Step 2 : Sort temp arrays highest votes to lowest
                            //          Method : find the position of the biggest vote in the
                            //          unsorted part, then swap it to the front using a temp variable
                            for (int i = 0; i < tmpCount - 1; i++)
                            {
                                // Assume the current position i has the biggest value
                                int maxPos = i;

                                // Walk through the rest to find if there is a bigger value
                                for (int j = i + 1; j < tmpCount; j++)
                                {
                                    if (tmpVote[j] > tmpVote[maxPos])
                                    {
                                        maxPos = j; // Found a bigger vote count, update position
                                    }
                                }

                                // If the biggest was NOT already at position i, swap them
                                if (maxPos != i)
                                {
                                    // Swap vote counts using a temp variable
                                    int tempVote   = tmpVote[i];
                                    tmpVote[i]     = tmpVote[maxPos];
                                    tmpVote[maxPos]= tempVote;

                                    // Swap names the same way so they stay aligned
                                    string tempName = tmpName[i];
                                    tmpName[i]      = tmpName[maxPos];
                                    tmpName[maxPos] = tempName;
                                }
                            }

                            for (int i = 0; i < tmpCount; i++)
                            {
                                cout << "| " << tmpName[i] << "\t\t| " << tmpVote[i] << "\t\t\t |" << endl;
                            }

                            if (tmpCount == 0)
                            {
                                cout << "| No active candidates to display.                   |" << endl;
                            }
                            cout << "|____________________________________________________|" << endl;

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 6 — SORT BY VOTES
                        // ============================================================
                        else if (adminChoice == "6")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|-------------- SORT CANDIDATES BY VOTES ------------|" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "| 1 -> Ascending                                     |" << endl;
                            cout << "| 2 -> Descending                                    |" << endl;
                            cout << "| Enter sort order: ";
                            string sortOrder;
                            cin >> sortOrder;

                            // Sort ALL parallel candidate arrays together by voteCount
                            // Method : each pass finds the position of the smallest (asc)
                            //          or biggest (desc) value in the unsorted part,
                            //          then does ONE clean swap using temp variables
                            for (int i = 0; i < totalCandidates - 1; i++)
                            {
                                // Start by assuming the target position is i itself
                                int targetPos = i;

                                // Search the rest of the array for a better candidate
                                for (int j = i + 1; j < totalCandidates; j++)
                                {
                                    if (sortOrder == "1")
                                    {
                                        // Ascending : look for a smaller vote count
                                        if (voteCount[j] < voteCount[targetPos])
                                        {
                                            targetPos = j;
                                        }
                                    }
                                    else if (sortOrder == "2")
                                    {
                                        // Descending : look for a bigger vote count
                                        if (voteCount[j] > voteCount[targetPos])
                                        {
                                            targetPos = j;
                                        }
                                    }
                                }

                                // Only swap if a better position was actually found
                                if (targetPos != i)
                                {
                                    // Swap voteCount using temp variable
                                    int tempVote         = voteCount[i];
                                    voteCount[i]         = voteCount[targetPos];
                                    voteCount[targetPos] = tempVote;

                                    // Swap isActive using temp variable
                                    int tempActive        = isActive[i];
                                    isActive[i]           = isActive[targetPos];
                                    isActive[targetPos]   = tempActive;

                                    // Swap candidateName using temp variable
                                    string tempName          = candidateName[i];
                                    candidateName[i]         = candidateName[targetPos];
                                    candidateName[targetPos] = tempName;

                                    // Swap partyName using temp variable
                                    string tempParty       = partyName[i];
                                    partyName[i]           = partyName[targetPos];
                                    partyName[targetPos]   = tempParty;

                                    // Swap candidateID using temp variable
                                    string tempID          = candidateID[i];
                                    candidateID[i]         = candidateID[targetPos];
                                    candidateID[targetPos] = tempID;
                                }
                            }

                            cout << "|____________________________________________________|" << endl;
                            cout << "| Sorted successfully!                               |" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "| ID          | Name         | Party        | Votes  |" << endl;
                            cout << "|-------------|--------------|--------------|--------|" << endl;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    cout << "| " << candidateID[i]   << "\t| "
                                         << candidateName[i] << "\t| "
                                         << partyName[i]     << "\t| "
                                         << voteCount[i]     << "\t |" << endl;
                                }
                            }
                            cout << "|____________________________________________________|" << endl;

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 7 — DECLARE WINNER
                        // ============================================================
                        else if (adminChoice == "7")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|---------------- ELECTION RESULT -------------------|" << endl;
                            cout << "|____________________________________________________|" << endl;

                            int maxVotes = -1;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1 && voteCount[i] > maxVotes)
                                {
                                    maxVotes = voteCount[i];
                                }
                            }

                            if (maxVotes == -1)
                            {
                                cout << "| No active candidates to declare a winner.          |" << endl;
                            }
                            else
                            {
                                // Count ties
                                int tieCount = 0;
                                for (int i = 0; i < totalCandidates; i++)
                                {
                                    if (isActive[i] == 1 && voteCount[i] == maxVotes) tieCount++;
                                }

                                if (tieCount > 1)
                                {
                                    cout << "| *** JOINT WINNERS (TIE at " << maxVotes << " votes) ***      |" << endl;
                                }
                                else
                                {
                                    cout << "| ***************** WINNER ************************** |" << endl;
                                }

                                for (int i = 0; i < totalCandidates; i++)
                                {
                                    if (isActive[i] == 1 && voteCount[i] == maxVotes)
                                    {
                                        cout << "|____________________________________________________|" << endl;
                                        cout << "| Name  : " << candidateName[i] << endl;
                                        cout << "| Party : " << partyName[i]     << endl;
                                        cout << "| Votes : " << voteCount[i]     << endl;
                                        cout << "|____________________________________________________|" << endl;
                                    }
                                }
                            }

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 8 — VIEW VOTING HISTORY LOG
                        // ============================================================
                        else if (adminChoice == "8")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|------------- ADMIN ACTION HISTORY LOG -------------|" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "| Date         | Event                               |" << endl;
                            cout << "|--------------|-------------------------------------|" << endl;

                            if (totalHistory == 0)
                            {
                                cout << "| No history recorded yet.                           |" << endl;
                            }
                            else
                            {
                                for (int i = 0; i < totalHistory; i++)
                                {
                                    cout << "| " << historyDate[i] << "\t| " << historyLog[i] << endl;
                                }
                                cout << "|____________________________________________________|" << endl;
                                cout << "| Total Logged Events : " << totalHistory << endl;
                            }
                            cout << "|____________________________________________________|" << endl;

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // ADMIN OPTION 9 — RESET ELECTION DATA
                        // ============================================================
                        else if (adminChoice == "9")
                        {
                            system("cls");
                            cout << "______________________________________________________" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "|-------------- RESET ELECTION DATA -----------------|" << endl;
                            cout << "|____________________________________________________|" << endl;
                            cout << "| WARNING: This will clear all votes and voter       |" << endl;
                            cout << "| flags. Candidates will NOT be deleted.             |" << endl;
                            cout << "| Are you sure? (1 = Yes / 0 = No): ";
                            string confirmReset;
                            cin  >> confirmReset;

                            if (confirmReset == "1")
                            {
                                for (int i = 0; i < totalCandidates; i++)
                                {
                                    voteCount[i] = 0;
                                }
                                for (int i = 0; i < totalVoters; i++)
                                {
                                    hasVoted[i] = 0;
                                    votedFor[i] = "";
                                }

                                historyLog[totalHistory]  = "RESET: All vote counts cleared. All voter flags reset.";
                                historyDate[totalHistory] = "Session";
                                totalHistory++;

                                cout << "|____________________________________________________|" << endl;
                                cout << "| Election data reset successfully!                  |" << endl;
                                cout << "|____________________________________________________|" << endl;
                            }
                            else
                            {
                                cout << "| Reset cancelled.                                   |" << endl;
                            }

                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }

                        else if (adminChoice == "10")
                        {
                            cout << "Logging out from Admin (Election Officer) Panel..." << endl;
                            cout << "Press Enter to confirm logout..." << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "Invalid option selected. Please choose between 1-10..." << endl;
                            cout << " Try again..." << endl;
                            cout << "Press any key to return to the admin menu..." << endl;
                            getch();
                        }
                    }
                    cout << "Press any key to return to the main menu..." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid credentials. " << endl;
                    if (adminAttempts < 2)
                    {
                        cout << "Try again." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch();
                    }
                    else
                    {
                        cout << "\nAccount Locked. Too many attempts." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch();
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

                    // Track logged-in voter index
                    int loggedVoterIndex = -1;

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

                        // ============================================================
                        // VOTER OPTION 1 — REGISTER AS A NEW VOTER
                        // ============================================================
                        if (voterChoice == "1")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|------------- VOTER REGISTRATION ------------------- |" << endl;
                            cout << "|______________________________________________________|" << endl;

                            if (totalVoters >= 500)
                            {
                                cout << "| [ERROR] Maximum voters reached (500).              |" << endl;
                            }
                            else
                            {
                                string newVID, newVName;
                                cout << "| Enter Voter ID   : ";
                                cin  >> newVID;

                                // Duplicate voter ID check
                                int dupVoter = 0;
                                for (int i = 0; i < totalVoters; i++)
                                {
                                    if (voterID[i] == newVID) dupVoter = 1;
                                }

                                if (dupVoter == 1)
                                {
                                    cout << "| [ERROR] Voter ID already registered.               |" << endl;
                                }
                                else
                                {
                                    cout << "| Enter Voter Name : ";
                                    cin  >> newVName;

                                    voterID[totalVoters]   = newVID;
                                    voterName[totalVoters] = newVName;
                                    hasVoted[totalVoters]  = 0;
                                    votedFor[totalVoters]  = "";
                                    loggedVoterIndex       = totalVoters;
                                    totalVoters++;

                                    cout << "|______________________________________________________|" << endl;
                                    cout << "| Registration successful! Welcome, " << newVName << "!" << endl;
                                    cout << "|______________________________________________________|" << endl;
                                }
                            }

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 2 — CAST YOUR VOTE
                        // ============================================================
                        else if (voterChoice == "2")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|---------------- CAST YOUR VOTE --------------------|" << endl;
                            cout << "|______________________________________________________|" << endl;

                            if (electionOpen == 0)
                            {
                                cout << "| [ERROR] Election is closed. Voting is not allowed. |" << endl;
                            }
                            else
                            {
                                cout << "| Enter your Voter ID: ";
                                string castID;
                                cin  >> castID;

                                int vIdx = -1;
                                for (int i = 0; i < totalVoters; i++)
                                {
                                    if (voterID[i] == castID) vIdx = i;
                                }

                                if (vIdx == -1)
                                {
                                    cout << "| [ERROR] Voter ID not found. Please register first.|" << endl;
                                }
                                else if (hasVoted[vIdx] == 1)
                                {
                                    cout << "| [ERROR] You have already cast your vote.           |" << endl;
                                }
                                else
                                {
                                    cout << "|______________________________________________________|" << endl;
                                    cout << "| Active Candidates:                                  |" << endl;
                                    cout << "| ID          | Name            | Party               |" << endl;
                                    cout << "|-------------|-----------------|---------------------|" << endl;

                                    int shown = 0;
                                    for (int i = 0; i < totalCandidates; i++)
                                    {
                                        if (isActive[i] == 1)
                                        {
                                            cout << "| " << candidateID[i] << "\t| " << candidateName[i] << "\t| " << partyName[i] << endl;
                                            shown++;
                                        }
                                    }

                                    if (shown == 0)
                                    {
                                        cout << "| No active candidates available.                    |" << endl;
                                    }
                                    else
                                    {
                                        cout << "|______________________________________________________|" << endl;
                                        cout << "| Enter Candidate ID to vote for: ";
                                        string voteForID;
                                        cin  >> voteForID;

                                        int candIdx = -1;
                                        for (int i = 0; i < totalCandidates; i++)
                                        {
                                            if (candidateID[i] == voteForID && isActive[i] == 1) candIdx = i;
                                        }

                                        if (candIdx == -1)
                                        {
                                            cout << "| [ERROR] Invalid Candidate ID.                      |" << endl;
                                        }
                                        else
                                        {
                                            voteCount[candIdx]++;
                                            hasVoted[vIdx]       = 1;
                                            votedFor[vIdx]       = voteForID;
                                            loggedVoterIndex     = vIdx;

                                            cout << "|______________________________________________________|" << endl;
                                            cout << "| Your vote for [ " << candidateName[candIdx] << " ] has been recorded!  " << endl;
                                            cout << "| Thank you for voting!                              |" << endl;
                                            cout << "|______________________________________________________|" << endl;
                                        }
                                    }
                                }
                            }

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 3 — VIEW ALL CANDIDATES
                        // ============================================================
                        else if (voterChoice == "3")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|--------------- VIEW ALL CANDIDATES ----------------|" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "| ID          | Name            | Party               |" << endl;
                            cout << "|-------------|-----------------|---------------------|" << endl;

                            int shown = 0;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    cout << "| " << candidateID[i] << "\t| " << candidateName[i] << "\t| " << partyName[i] << endl;
                                    shown++;
                                }
                            }

                            if (shown == 0)
                            {
                                cout << "| No candidates available.                           |" << endl;
                            }
                            cout << "|______________________________________________________|" << endl;

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 4 — SEARCH CANDIDATE BY NAME
                        // ============================================================
                        else if (voterChoice == "4")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|------------- SEARCH CANDIDATE BY NAME -------------|" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "| Enter name to search: ";
                            string searchTerm;
                            cin  >> searchTerm;

                            int found = 0;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    // Manual substring search
                                    int sLen = searchTerm.length();
                                    int nLen = candidateName[i].length();
                                    int match = 0;
                                    for (int k = 0; k <= nLen - sLen; k++)
                                    {
                                        int sub = 1;
                                        for (int m = 0; m < sLen; m++)
                                        {
                                            if (candidateName[i][k + m] != searchTerm[m]) sub = 0;
                                        }
                                        if (sub == 1) match = 1;
                                    }

                                    if (match == 1)
                                    {
                                        cout << "| ID: "    << candidateID[i]
                                             << " | Name: " << candidateName[i]
                                             << " | Party: "<< partyName[i]
                                             << " | Votes: "<< voteCount[i] << endl;
                                        found++;
                                    }
                                }
                            }

                            if (found == 0)
                            {
                                cout << "| No candidates found matching '" << searchTerm << "'." << endl;
                            }
                            cout << "|______________________________________________________|" << endl;

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 5 — VIEW CURRENT STANDINGS
                        // ============================================================
                        else if (voterChoice == "5")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|-------------- CURRENT STANDINGS -------------------|" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "| Rank | Name            | Party          | Votes     |" << endl;
                            cout << "|------|-----------------|----------------|-----------|" << endl;

                            // Display-only temp copy — descending sort
                            string tmpName[50];
                            string tmpParty[50];
                            int    tmpVote[50];
                            int    tmpCount = 0;

                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    tmpName[tmpCount]  = candidateName[i];
                                    tmpParty[tmpCount] = partyName[i];
                                    tmpVote[tmpCount]  = voteCount[i];
                                    tmpCount++;
                                }
                            }

                            // Sort temp arrays : highest votes first (descending)
                            // Method : find the position of the biggest vote in the
                            //          unsorted part, then swap it to position i using temp variables
                            for (int i = 0; i < tmpCount - 1; i++)
                            {
                                // Assume position i already has the biggest vote
                                int maxPos = i;

                                // Check the rest to find if there is a bigger vote
                                for (int j = i + 1; j < tmpCount; j++)
                                {
                                    if (tmpVote[j] > tmpVote[maxPos])
                                    {
                                        maxPos = j; // Found a bigger one, update position
                                    }
                                }

                                // If the biggest is not already at position i, swap
                                if (maxPos != i)
                                {
                                    // Swap vote counts using temp variable
                                    int tempVote    = tmpVote[i];
                                    tmpVote[i]      = tmpVote[maxPos];
                                    tmpVote[maxPos] = tempVote;

                                    // Swap names using temp variable (keep aligned)
                                    string tempName  = tmpName[i];
                                    tmpName[i]       = tmpName[maxPos];
                                    tmpName[maxPos]  = tempName;

                                    // Swap party names using temp variable (keep aligned)
                                    string tempParty  = tmpParty[i];
                                    tmpParty[i]       = tmpParty[maxPos];
                                    tmpParty[maxPos]  = tempParty;
                                }
                            }

                            for (int i = 0; i < tmpCount; i++)
                            {
                                cout << "| " << (i+1) << "\t| " << tmpName[i] << "\t| " << tmpParty[i] << "\t| " << tmpVote[i] << "\t  |" << endl;
                            }

                            if (tmpCount == 0)
                            {
                                cout << "| No active candidates.                              |" << endl;
                            }
                            cout << "|______________________________________________________|" << endl;

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 6 — SORT CANDIDATES BY NAME (A-Z)
                        // ============================================================
                        else if (voterChoice == "6")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|--------- CANDIDATES SORTED ALPHABETICALLY (A-Z) ---|" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "| ID          | Name            | Party               |" << endl;
                            cout << "|-------------|-----------------|---------------------|" << endl;

                            // Display-only temp copy — ascending name sort
                            string tmpName[50];
                            string tmpParty[50];
                            string tmpID[50];
                            int    tmpCount = 0;

                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    tmpName[tmpCount]  = candidateName[i];
                                    tmpParty[tmpCount] = partyName[i];
                                    tmpID[tmpCount]    = candidateID[i];
                                    tmpCount++;
                                }
                            }

                            // Sort temp arrays : alphabetical A-Z by candidate name
                            // Method : find the position of the smallest name in the
                            //          unsorted part, then swap it to position i using temp variables
                            for (int i = 0; i < tmpCount - 1; i++)
                            {
                                // Assume position i already has the smallest name
                                int minPos = i;

                                // Check the rest to find if there is a smaller (earlier) name
                                for (int j = i + 1; j < tmpCount; j++)
                                {
                                    if (tmpName[j] < tmpName[minPos])
                                    {
                                        minPos = j; // Found an earlier name, update position
                                    }
                                }

                                // If the smallest name is not already at position i, swap
                                if (minPos != i)
                                {
                                    // Swap names using temp variable
                                    string tempName  = tmpName[i];
                                    tmpName[i]       = tmpName[minPos];
                                    tmpName[minPos]  = tempName;

                                    // Swap party names using temp variable (keep aligned)
                                    string tempParty  = tmpParty[i];
                                    tmpParty[i]       = tmpParty[minPos];
                                    tmpParty[minPos]  = tempParty;

                                    // Swap candidate IDs using temp variable (keep aligned)
                                    string tempID  = tmpID[i];
                                    tmpID[i]       = tmpID[minPos];
                                    tmpID[minPos]  = tempID;
                                }
                            }

                            for (int i = 0; i < tmpCount; i++)
                            {
                                cout << "| " << tmpID[i] << "\t| " << tmpName[i] << "\t| " << tmpParty[i] << endl;
                            }

                            if (tmpCount == 0)
                            {
                                cout << "| No active candidates.                              |" << endl;
                            }
                            cout << "|______________________________________________________|" << endl;

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 7 — CHECK IF YOU VOTED
                        // ============================================================
                        else if (voterChoice == "7")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|--------------- CHECK YOUR VOTE STATUS -------------|" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "| Enter your Voter ID: ";
                            string checkID;
                            cin  >> checkID;

                            int chkIdx = -1;
                            for (int i = 0; i < totalVoters; i++)
                            {
                                if (voterID[i] == checkID) chkIdx = i;
                            }

                            if (chkIdx == -1)
                            {
                                cout << "| [INFO] Voter ID not found in the system.           |" << endl;
                            }
                            else if (hasVoted[chkIdx] == 1)
                            {
                                cout << "| You have voted for Candidate ID: " << votedFor[chkIdx] << endl;
                            }
                            else
                            {
                                cout << "| You have NOT voted yet.                            |" << endl;
                            }
                            cout << "|______________________________________________________|" << endl;

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 8 — VIEW PARTY-WISE SUMMARY
                        // ============================================================
                        else if (voterChoice == "8")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|-------------- PARTY-WISE SUMMARY --------------------|" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "| Party           | Candidates | Total Votes           |" << endl;
                            cout << "|-----------------|------------|-----------------------|" << endl;

                            string uniqueParties[50];
                            int    partyVotes[50];
                            int    partyCandCount[50];
                            int    uniqueCount = 0;

                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1)
                                {
                                    int pFound = -1;
                                    for (int p = 0; p < uniqueCount; p++)
                                    {
                                        if (uniqueParties[p] == partyName[i]) pFound = p;
                                    }

                                    if (pFound == -1)
                                    {
                                        uniqueParties[uniqueCount]  = partyName[i];
                                        partyVotes[uniqueCount]     = voteCount[i];
                                        partyCandCount[uniqueCount] = 1;
                                        uniqueCount++;
                                    }
                                    else
                                    {
                                        partyVotes[pFound]     += voteCount[i];
                                        partyCandCount[pFound]++;
                                    }
                                }
                            }

                            for (int p = 0; p < uniqueCount; p++)
                            {
                                cout << "| " << uniqueParties[p] << "\t| " << partyCandCount[p] << "\t\t| " << partyVotes[p] << "\t\t\t|" << endl;
                            }

                            if (uniqueCount == 0)
                            {
                                cout << "| No active candidates.                              |" << endl;
                            }
                            cout << "|______________________________________________________|" << endl;

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        // ============================================================
                        // VOTER OPTION 9 — VIEW WINNER ANNOUNCEMENT
                        // ============================================================
                        else if (voterChoice == "9")
                        {
                            system("cls");
                            cout << "________________________________________________________" << endl;
                            cout << "|______________________________________________________|" << endl;
                            cout << "|--------------- WINNER ANNOUNCEMENT ------------------|" << endl;
                            cout << "|______________________________________________________|" << endl;

                            int maxVotes = -1;
                            for (int i = 0; i < totalCandidates; i++)
                            {
                                if (isActive[i] == 1 && voteCount[i] > maxVotes) maxVotes = voteCount[i];
                            }

                            if (maxVotes == -1)
                            {
                                cout << "| No active candidates to announce a winner.         |" << endl;
                            }
                            else
                            {
                                int tieCount = 0;
                                for (int i = 0; i < totalCandidates; i++)
                                {
                                    if (isActive[i] == 1 && voteCount[i] == maxVotes) tieCount++;
                                }

                                if (tieCount > 1)
                                {
                                    cout << "| *** JOINT WINNERS (TIE at " << maxVotes << " votes) ***      |" << endl;
                                }
                                else
                                {
                                    cout << "| ****************** WINNER ************************* |" << endl;
                                }

                                for (int i = 0; i < totalCandidates; i++)
                                {
                                    if (isActive[i] == 1 && voteCount[i] == maxVotes)
                                    {
                                        cout << "|______________________________________________________|" << endl;
                                        cout << "| Name  : " << candidateName[i] << endl;
                                        cout << "| Party : " << partyName[i]     << endl;
                                        cout << "| Votes : " << voteCount[i]     << endl;
                                        cout << "|______________________________________________________|" << endl;
                                    }
                                }
                            }

                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }

                        else if (voterChoice == "10")
                        {
                            cout << "Logging out from voter (Registered Citizen) Panel..." << endl;
                            cout << "Press Enter to confirm logout." << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "Invalid option selected. Please choose between 1-10." << endl;
                            cout << " Try again..." << endl;
                            cout << "Press any key to return to the voter menu..." << endl;
                            getch();
                        }
                    }
                    cout << "Press any key to return to the main menu..." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid credentials. " << endl;
                    if (voterAttempts < 2)
                    {
                        cout << "Try again." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch();
                    }
                    else
                    {
                        cout << "\nAccount Locked. Too many attempts." << endl;
                        cout << "Press any key to continue..." << endl;
                        getch();
                    }
                }
            }
        }
        else if (userChoice == "3")
        {
            cout << "Exiting The Voting System. Goodbye!" << endl;
            break;
        }
        else if (userChoice >= "4")
        {
            cout << "Invalid option selected. Exiting..." << endl;
            cout << "Try again...." << endl;
            cout << "enter any key to cont...." << endl;
            getch();
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
