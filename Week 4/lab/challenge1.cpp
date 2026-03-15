#include<iostream>
using namespace std;
main()
{
    int n,even;
    cout<<"Enter a number : ";
    cin>>n;
    even=n%2;
    
    if(even==0){
        cout<<"The Number is Even";
    } 
    else{
        cout<<"The Number is Odd";
        
    }
}