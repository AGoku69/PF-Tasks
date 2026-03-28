#include<iostream>
using namespace std;
main()
{
    string word;
    char lettrer;
    bool isfound = false;
    cout<<"Enter a word: "<<endl;
    cin>>word;
    cout<<"You entered: "<<word<<endl;
    cout<<"Enter a letter: "<<endl;
    cin>>lettrer;
    cout<<"You entered: "<<lettrer<<endl;
    for(int i=0; word[i] != '\0'; i++)
    {
        if(word[i] == lettrer)
        {
            isfound = true;
            break;
        }
    }
    if(isfound)
    {
        cout<<"Letter found in the word.";
    }
    else
    {
        cout<<"Letter not found in the word.";
    }
}