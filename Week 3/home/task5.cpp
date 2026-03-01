#include<iostream>
using namespace std;
main()
{
    string name;
    float kgs;

    cout<<"Enter the Name of Person : ";
    cin>>name;

    cout<<"Enter the target weight loss in kilograms : ";
    cin>>kgs;

    float requiredDays;
    requiredDays=kgs*15;
    cout<<name<<" will need "<<requiredDays<<" days to lose "<<kgs<<" kg of weight by following the doctor's suggestions ";

    
}