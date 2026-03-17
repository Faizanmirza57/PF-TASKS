#include <iostream>
using namespace std;
main()
{
    int age, washingMachinePrice, toyPrice;
    double savedMoney = 0;
    int moneyBirthday = 10;

    cin >> age;
    cin >> washingMachinePrice;
    cin >> toyPrice;

    int toysCount = 0;

    for(int i = 1; i <= age; i++)
    {
        if(i % 2 == 0) 
        {
            savedMoney = savedMoney + moneyBirthday - 1; 
            moneyBirthday = moneyBirthday + 10;          
        }
        else
        {
            toysCount = toysCount + 1;
        }
    }

    savedMoney = savedMoney + toysCount * toyPrice;


    if(savedMoney >= washingMachinePrice)
    {
        cout << "Yes! " << savedMoney - washingMachinePrice;
    }
    else
    {
        cout << "No! " << washingMachinePrice - savedMoney;
    }

}