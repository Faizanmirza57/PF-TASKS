#include<iostream>
using namespace std;
main()
{
    string user_enter, mypassword;
    mypassword = "Pass@123";
    cout<<"Enter the password";
    cin>>user_enter;
    
    if(user_enter == mypassword){
        cout<<"Wow! You have cracked the code.";
    }
    else{
        cout<<"It is not that simple try again.";
    }

}