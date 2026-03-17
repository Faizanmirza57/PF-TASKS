#include<iostream>
using namespace std;
main()
{
   int num;
   cout<<"Enter a positive number : ";
   cin>>num;
   
   while(num <= 0){
    cout<<"Error! "<<num<<" is not a positive number. "<<endl;
    cout<<"Please enter a positive number. "<<endl;
   }
   cout<<"Program ends ";
}