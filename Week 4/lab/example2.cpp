#include<iostream>
using namespace std;
main()
{
  char going;
  cout<<"Are your friends going? (Press y for yes) : ";
  cin>>going;

  if(going == 'y'){
    cout<<"Your are also going!";
  }
  else{
    cout<<"Your are not going!";
  }
}