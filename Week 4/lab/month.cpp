#include<iostream>
using namespace std;
main()
{
    int monthlySalary, halfSalary, advanceSalary, monthsRemaining, totalSalary, requiredMonths;
    monthlySalary= 10000;
    halfSalary= monthlySalary/2;
    advanceSalary= halfSalary*6;
    totalSalary= halfSalary*4+advanceSalary;
    requiredMonths= totalSalary/halfSalary;

    cout<<"Months required to buy laptop : "<<requiredMonths;   

}