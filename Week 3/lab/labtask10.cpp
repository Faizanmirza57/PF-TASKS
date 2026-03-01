#include<iostream>
using namespace std;
main()
{
    int wins,losses,draws;
    cout<<"Enter the number of wins: ";
    cin>>wins;
    cout<<"Enter the number of losses: ";
    cin>>losses;
    cout<<"Enter the number of draws: ";
    cin>>draws;
    int totalpoints=(wins*3)+(draws*1);
    cout<<"Pakistan has obtained "<<totalpoints<<" points in Asia cup tournament ";

}