#include<iostream>
using namespace std;
main()
{
    int num, digit, frequency=0;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Enter a digit to check : ";
    cin>>digit;

    while(num>0){
        int rem = num%10;
        if(rem == digit){
            frequency=frequency+1;
        }
      
      num= num/10;

    }
  cout<<"Frequency is "<<frequency;

}