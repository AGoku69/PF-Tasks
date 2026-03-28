#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: "<<endl;
    getline(cin, word);
    cout<<"You entered: "<<word<<endl;
     for(int i =word.length() - 1; i >= 0; i--) 
    {
        cout<<word[i];
    }
    cout << endl;
   
}