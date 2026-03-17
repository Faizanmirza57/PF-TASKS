#include<iostream>
using namespace std;
main()
{   
    int choice, num1, num2;
    cout<<"-----Simple Calculator-----"<<endl;
    cout<<"1- Addition"<<endl;
    cout<<"2- Subtraction"<<endl;
    cout<<"3- Multiplication"<<endl;
    cout<<"4- Division"<<endl;
    cout<<"5- Clear screen"<<endl;
    cout<<"6- Exit"<<endl;

    cout<<"Enter your choice (1-6): ";
    cin>>choice;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;

    if(choice == 1){
        int result= num1+num2;
        cout<<"Result : "<<result;

    }
    if(choice == 2){
        int result= num1-num2;
        cout<<"Result : "<<result;

    }
    if(choice == 3){
        int result= num1*num2;
        cout<<"Result : "<<result;

    }
    if(choice == 4){
        int result= num1/num2;
        cout<<"Result : "<<result;

    }
     if(choice == 5){
        cout<<"Screen Cleared";

    }
     if(choice == 6){
        
        cout<<"Exiting calculator. Goodbye!";

    }
}
    

    
