#include<iostream>
using namespace std;
main()
{
    int initial_v,accelaration,time;
    cout<<"Enter initial velocity(m/s): ";
    cin>>initial_v;

    cout<<"Enter accelaration(m/s^2): ";
    cin>>accelaration;

    cout<<"Enter time(S): ";
    cin>>time;
    
    int final_v;
    final_v=initial_v+(accelaration*time);
    cout<<"Final velocity : "<<final_v<<"m/s";

}