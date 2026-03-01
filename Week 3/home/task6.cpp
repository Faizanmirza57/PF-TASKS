#include<iostream>
using namespace std;
main()
{
  int size,cost,area;

  cout<<"Enter the size of the fertilizer bag in pounds : ";
  cin>>size;

  cout<<"Enter the cost of the bag : ";
  cin>>cost;

  cout<<"Enter the area in square feet that can be covered by the bag : ";
  cin>>area;

  int costPerPound;
  costPerPound=cost/size;
  
  int costPerSquareFeet;
  costPerSquareFeet=cost/area;

  cout<<"Cost per pound : $"<<costPerPound<<endl;
  cout<<"Cost of fertilizing per square feet : $"<<costPerSquareFeet<<endl;
    
}