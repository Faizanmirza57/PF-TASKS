#include<iostream>
using namespace std;
main()
{
    int i,p;
    cout<<"Enter imposters: ";
    cin>>i;
    cout<<"Enter players: ";
    cin>>p;
    float chances;
    chances=(i/p)*100;
    cout<<"Chance = "<<chances<<"%";

}