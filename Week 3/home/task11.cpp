#include<iostream>
using namespace std;
main()
{
int age;
int moved;

cout<<"Enter the person's age:";
cin>>age;

cout<<"Enter the number of times they've moved:";
cin>>moved;       

int average;
average=age/(moved+1);
cout<<"Average Number of Years lived in same house: "<<average;
}