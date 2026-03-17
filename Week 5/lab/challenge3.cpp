#include<iostream>
using namespace std;
main()
{
    string pin;
    int choice;
    float deposit=0, balance=0, withdraw=0, current_balance=0;
    current_balance= deposit-withdraw;
    
   cout<<"Enter PIN : ";
   cin>>pin;

    for(int i=1; i<=3; i++){
       if(pin == "1234"){
        cout<<"Login successful "<<endl;
        break;
       }
       else
       {
        cout<<"Wrong Pin!"<<endl;
       }

       if(i==3 && !(pin == "1234")){
        cout<<"Too many attempts! Program ends. "<<endl;

       }
    }
    for(int i=1; i<=5; i++){
        cout<<"----- ATM MENU -----"<<endl;
        cout<<"1- Check Balance "<<endl;
        cout<<"2- Deposit Money "<<endl;
        cout<<"3- Withdraw Money "<<endl;
        cout<<"4- Exit"<<endl;

        cout<<"Select an option from menu : ";
        cin>>choice;

        if(choice == 1){
        
            cout<<"Current Account balance : "<<balance<<endl;
            
        
        }

        else if(choice == 2){
            cout<<"Enter an amount to deposit : ";
            cin>>deposit;
            cout<<"PKR "<<deposit<<" has been added to your account."<<endl;
            balance= deposit+balance;
        }

        else if(choice == 3){
            if(balance >= 0){
            cout<<"Enter an amount to withdraw : ";
            cin>>withdraw;
            }
            if(balance >= withdraw){

            cout<<"PKR "<<withdraw<<" has been withdrawn from your account."<<endl;
            cout<<"Your new balance is PKR "<<balance<<endl;
            current_balance= balance-withdraw;
            
            }
            else{
                cout<<"Insufficient Balance! "<<endl;
            }
            
        }
        else if(choice == 4){
            cout<<"Program ends.";
        }



    }
    
}