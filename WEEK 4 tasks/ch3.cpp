#include<iostream>
using namespace std;
main()
{
    string word1,word2;
    cout<<"enter a word1 =  ";
    cin>>word1;
    cout<<"enter a word2 =  ";
    cin>>word2;
    if( word1 == word2 )
    {
        cout<<"the word1 entered  "<<word1<<" is equal to entered word 2 "<<word2;
    }
    else 
    {
        cout<<"the word1 entered  "<<word1<<" is not equal to entered word 2 "<<word2;
    }
    
}