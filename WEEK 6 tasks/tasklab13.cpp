#include <iostream>
using namespace std;
main() 
{
    int n;
    cout<<"Enter number of chords: ";
    cin>>n;
    string chords[n];
    cout<<"Enter chords:\n";
    for(int i = 0; i < n; i++)
    {
        cin>>chords[i];
    }
    // Jazzify process
    for(int i = 0; i < n; i++) 
    {
        int len = chords[i].length();
        // Check if last character is NOT '7'
        if(len == 0 || chords[i][len - 1] != '7') 
        {
            chords[i] += "7";
        }
    }
    // Output result
    cout<<"Jazzified chords: ";
    for(int i = 0; i < n; i++) 
    {
        cout<<chords[i] << " ";
    }

}