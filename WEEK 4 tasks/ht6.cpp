#include<iostream>
using namespace std;
main()
{
    string shape;
    int area,length,breadth;
    int PI=3.14;
    cout<<"enter name of shape =  ";
    cin>>shape;
    if( shape == "square")
    { 
        cout<<"enter length of square = ";
        cin>>length;
        area = length * length;
    }
    if (shape == "rectangle")
    {
        cout<<"enter length of rectangle = ";
        cin>>length;
        cout<<"enter breadth of rectangle = ";
        cin>>breadth;
        area = length * breadth;
    }
    if (shape   == "circle")
    {
        cout<<"enter radius of circle = ";
        cin>>length;
        area = PI * length * length;
    }
    if (shape == "triangle")
    {
        cout<<"enter length of triangle = ";
        cin>>length;
        cout<<"enter breadth of triangle = ";
        cin>>breadth;
        area = 0.5 * length * breadth;
    }
    cout<<"shape name is = "<<shape<<endl<<"the area of hsape is = "<<area;
    
}