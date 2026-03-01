#include<iostream>
using namespace std;
main()
{
    int m,fps;
    cout<<"Number of minutes: ";
    cin>>m;
    cout<<"Frames per second: ";
    cin>>fps;
    int frames;
    frames=m*60*fps;
    cout<<"Total number of frames: "<<frames;

}