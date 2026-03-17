#include<iostream>
using namespace std;
main()
{   
    int choice;
    cout<<"-----Restaurant Management System-----"<<endl;
    cout<<"1- View food menu"<<endl;
    cout<<"2- Place order"<<endl;
    cout<<"3- View order status"<<endl;
    cout<<"4- Generate bill"<<endl;
    cout<<"5- Contact staff"<<endl;
    cout<<"6- Exit"<<endl;

    cout<<"Enter your choice (1-6): ";
    cin>>choice;

    if(choice == 1){
        cout<<"You selected : View food menu";
    }
    else if(choice == 2){
        cout<<"You selected : Place order";
    }
    else if(choice == 3){
        cout<<"You selected : View order status";
    }
    else if(choice == 4){
        cout<<"You selected : Generate bill";
    }
    else if(choice == 5){
        cout<<"You selected : Contact staff";
    }
    else if(choice == 6){
        cout<<"You selected : Exit";
    }
}