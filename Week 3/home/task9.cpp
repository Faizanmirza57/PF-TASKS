#include<iostream>
using namespace std;
main()
{
  int num;
  cout<<"Enter a 4-digit nnumber : ";
  cin>>num;

  int result;
  result=num%10+num/10%10+num/100%10+num/1000%10;
  cout<<"Sum of individual digits : "<<result;
  
}