#include<iostream>
using namespace std;
main()
{
string name;
for (int i = 0; i >= 0; i++)
{   
    cout << "Please Enter your name : ";
    cin >> name;
    if (name == "exit")
    {

    break;
    
    }
    cout << " hello " << name << endl;
}

}
