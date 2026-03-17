#include<iostream>
using namespace std;
main()
{   
    int choice;
    string name;
    cout<<"-----LIBRARY SYSTEM-----"<<endl;
    cout<<"1- Add book"<<endl;
    cout<<"2- View book"<<endl;
    cout<<"3- Borrow book"<<endl;
    cout<<"4- Issue book"<<endl;
    cout<<"5- Exit"<<endl;

    cout<<"Enter your choice (1-5) : ";
    cin>>choice;

    if(choice == 1){
        cout<<"Enter book name : ";
        cin>>name;
        cout<<"You added a book : "<<name<<endl;
    }
    if(choice == 2){
        cout<<"Your added books : "<<name<<endl;  
    }
    if(choice == 3){ 
        cout<<"You borrowed a book."<<endl;

    }
    if(choice == 4){
        cout<<"You have been issued a book."<<endl;
    }
    if(choice == 5){
        cout<<"Exiting library system. Goodbye!";
    }
    
}