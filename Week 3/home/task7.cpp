#include<iostream>
using namespace std;
main()
{
  string name_of_movie;
  int price_of_adult_ticket;
  int price_of_child_ticket;
  int number_of_adult_tickets;
  int number_of_child_tickets;
  int total_amount_collected;
  int percentageToCharity;

  cout<<"Enter the movie name : ";
  cin>>name_of_movie;

  cout<<"Enter the adult ticket price : ";
  cin>>price_of_adult_ticket;

  cout<<"Enter the child ticket price : ";
  cin>>price_of_child_ticket;

  cout<<"Enter the number of adult tickets sold : ";
  cin>>number_of_adult_tickets;

  cout<<"Enter the number of child tickets sold : ";
  cin>>number_of_child_tickets;

  cout<<"Enter the percentage of amount to be donated to charity : ";
  cin>>percentageToCharity;

  total_amount_collected=(price_of_adult_ticket*number_of_adult_tickets)+(price_of_child_ticket*number_of_child_tickets);
  percentageToCharity=total_amount_collected*percentageToCharity/100;
  
  int remainingAmount;
  remainingAmount=total_amount_collected-percentageToCharity;
  
  cout<<"Movie : "<<name_of_movie<<endl;
  cout<<"Total amount generated from ticket sales : $"<<total_amount_collected<<endl;
  cout<<"Donation to charity : $"<<percentageToCharity<<endl;
  cout<<"Remaining amount after donation : $"<<remainingAmount<<endl;

}