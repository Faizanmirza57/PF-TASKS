#include<iostream>
using namespace std;
main()
{
    int bill;
    cout<<"Enter your bill : ";
    cin>>bill;

    if(bill <= 5000){
       int discounted_bill;
       discounted_bill= bill*0.95;
       cout<<"Your discounted bill : "<<discounted_bill;
    }
    else{
        int discounted_bill;
        discounted_bill= bill*0.90;
        cout<<"Your discounted bill : "<<discounted_bill;

    }
}