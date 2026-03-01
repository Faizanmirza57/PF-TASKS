#include<iostream>
using namespace std;
main()
{
    int charge, time;
    cout<<"Enter the charge(Q) in coulombs: ";
    cin>>charge;
    cout<<"Enter the time(t) in seconds: ";
    cin>>time;
    float current=charge/time;
    cout<<"The current(I) is: "<<current<<" Amperes";
    
}