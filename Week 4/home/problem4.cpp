#include<iostream>
using namespace std;
main()
{
    int red_rose, white_rose, tulips;
    float red_rose_price, white_rose_price, tulips_price, original_price;

    cout<<"Red rose : ";
    cin>>red_rose;
    cout<<"White rose : ";
    cin>>white_rose;
    cout<<"Tulips : ";
    cin>>tulips;
    
    red_rose_price= red_rose*2.00;
    white_rose_price= white_rose*4.10;
    tulips_price= tulips*2.50;

    original_price= red_rose_price+ white_rose_price+ tulips_price;

    if(original_price > 200){
        float discount = original_price*0.80;
        cout<<"Total price : "<<original_price<<endl;
        cout<<"Price after discount : "<< discount;
    }


}