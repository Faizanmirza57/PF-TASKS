#include<iostream>
using namespace std;
main()
{
  float vegPerkg, fruitPerkg;
  int totalVeg, totalFruit;
  
  cout<<"Enter vegetable price per kilogram (in coins) : ";
  cin>>vegPerkg;

  cout<<"Enter fruit price per kilogram (in coins) : ";
  cin>>fruitPerkg;

  cout<<"Enter total kilograms of vegetables : ";
  cin>>totalVeg;

  cout<<"Enter total kilograms of fruits : ";
  cin>>totalFruit;
   
  float totalEarning;
  totalEarning=(vegPerkg*totalVeg+fruitPerkg*totalFruit)/1.94;

  cout<<"Total earnings in rupees (rps) : "<<totalEarning;
  
}