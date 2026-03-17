#include<iostream>
using namespace std;
main()
{
    int number, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;

    while(number > 0)
    {
        int rem = number % 10;
        sum = sum + rem;
        number = number / 10;
    }

    cout<<"Sum of digits = "<<sum;

   
}