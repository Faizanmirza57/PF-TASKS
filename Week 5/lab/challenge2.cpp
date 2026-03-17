#include<iostream>
using namespace std;
main()
{
    string username, password;
    string student_name;
    int age;
    string course_name;
    int choice;
    cout<<"Enter username : ";
    cin>>username;
    cout<<"Enter password : ";
    cin>>password;
 
for(int i=1; i<=3; i++){
    if(username == "admin" && password == "1234")
    {
         cout<<"Login Successful "<<endl;
         break;
    }
    else
    {
        cout<<"Wrong login!";
    }
    if(i == 3 && !(username == "admin" && password == "1234")){
        cout<<"Too many attempts! Program ends."<<endl;
    }

}

for(int i=1; i<=5; i++){
    cout<<"----University management system----"<<endl;
    cout<<"1- Add student "<<endl;
    cout<<"2- View student "<<endl;
    cout<<"3- Add course "<<endl;
    cout<<"4- EXit "<<endl;

    cout<<"Enter choice : ";
    cin>>choice;

    if(choice == 1){
        
        cout<<"Enter student name: ";
        cin>>student_name;

        
        cout<<"Enter student age: ";
        cin>>age;

        cout<<"Student added successfully. "<<endl;

    }
    else if(choice == 2)
    {
        if(student_name != "")
        {
        cout<<"Student Name : "<<student_name<<endl;
        cout<<"Age : "<<age<<endl;
        }
        else{
            cout<<"No student record found! "<<endl;
        }
    }
    else if(choice == 3){
        cout<<"Enter course name : ";
        cin>>course_name;
        cout<<"Course added : "<<course_name<<endl;

    }
    else if(choice == 4){
        cout<<"Program ends "<<endl;
    }
    else{
        cout<<"Invalid Choice!";
    }
 }
}