#include<iostream>
using namespace std;
main()
{
    int matric,inter,ecat;
    string name;

    cout<<"Enter the student's name: ";
    cin>>name;
    cout<<"Enter matriculation marks (out of 1100): ";
    cin>>matric;
    cout<<"Enter intermediate marks (out of 550): ";
    cin>>inter;
    cout<<"Enter Ecat marks (out of 400): ";
    cin>>ecat;
    float aggregate = (matric/1100.0)*10 + (inter/550.0)*40 + (ecat/400.0)*50;
    cout<<"Aggregate score for" <<name<< " is: "<<aggregate<<"%";
}