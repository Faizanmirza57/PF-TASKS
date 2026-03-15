#include<iostream>
using namespace std;
main()
{
    int holidays, working_days, time_for_games, difference;
    cout<<"Enter the number of holidays : ";
    cin>>holidays;

    working_days=365-holidays;
    time_for_games= holidays*127+working_days*63;
    difference= 30000-time_for_games;

    if(difference < 1){
        cout<<"Tom will run away"<<endl;
        cout<<difference<<" minutes for play";
    }
    else{
        cout<<"Tom sleeps well"<<endl;
        cout<<difference<<" minutes less for play";
    }
}