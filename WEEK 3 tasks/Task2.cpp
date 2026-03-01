#include<iostream>
using namespace std;
main()
{
int min;
cout<<"enter length of video in minutes : ";
cin>>min;

int sec;
cout<<"enter the frames per second in sec : ";
cin>>sec;

int min_in_sec;
min_in_sec=min*60;

int tot_frame;
tot_frame=min_in_sec*sec;

cout<<" your total No of frames is this "<<tot_frame;
}
