#include<iostream>
using namespace std;
main()
{
    char word[100];
    cout<<"Enter a word: "<<endl;
    cin>>word;
    cout<<"You entered: "<<word<<endl;
    for(int i=0; word[i] != '\0'; i++)
    {
        cout<<"The position of character is ["<<i<<"] of: "<<word[i]<<endl;
    }
}