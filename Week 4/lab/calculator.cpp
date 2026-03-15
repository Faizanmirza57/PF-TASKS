#include<iostream>
using namespace std;
main()
{
    int num1, num2, result;
    char op;
    cout<<"Enter the Number : ";
    cin>>num1;
    cout<<"Enter the operator : ";
    cin>>op;
    cout<<"Enter the second Number : ";
    cin>>num2;

    if(op == '+'){
     result= num1-num2;
    }
    if(op == '-'){
     result= num1+num2;
    }
    if(op == '*'){
     result= num1/num2;
    }
    if(op == '/'){
     result= num1*num2;
    }

    cout<<num1<<op<<num2<< "=" <<result;
}