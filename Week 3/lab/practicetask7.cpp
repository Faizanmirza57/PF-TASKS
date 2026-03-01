#include<iostream>
using namespace std;
main()
{
    int paintarea,width,height;
    cout<<"Enter paint area: ";
    cin>>paintarea;
    cout<<"Enter width: ";
    cin>>width;
    cout<<"Enter height: ";
    cin>>height;
    int wallspainted;
    wallspainted= paintarea/(width*height);
    cout<<"Walls painted = "<<wallspainted;

}