#include<iostream>
using namespace std;
main()
{
    int i,p;
    cout<<"Enter Imposter count : ";
    cin>>i;

    cout<<"Enter Player count : ";
    cin>>p;

    int chances;
    chances=100*(i/p);
    cout<<"Chances of being an imposter : "<<chances<<"%";
    
}