#include<iostream>
using namespace std;
main()
{
    string country;
    int ticket_price;

    cout<<"Enter the name of country : ";
    cin>>country;
    cout<<"Enter the ticket price : ";
    cin>>ticket_price;

    if(country == "ireland"){
        int discount = ticket_price*0.90;
        cout<<"Discounted Price : "<< discount;
    }
    else{
        int discount = ticket_price*0.95;
        cout<<"Discounted Price : "<< discount;
    }

    

}