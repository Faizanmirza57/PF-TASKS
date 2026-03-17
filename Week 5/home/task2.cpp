#include<iostream>
using namespace std;
main()
{
    int repeat, sum, i;
    int a = 0, b = 1;

    cout<<"Enter length of fibonacci series : ";
    cin>>repeat;

    for(i = 1; i <= repeat; i++)
    {
        cout<<a<<" ";
        sum = a + b;
        a = b;
        b = sum;
    }
}