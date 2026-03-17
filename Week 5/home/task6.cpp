#include<iostream>
using namespace std;
main()
{
    int num1, num2, hcf, lcm;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

     for(int i = 1; i <= num1 && i <= num2; i++){
        if(num1%i == 0 && num2%i == 0){
            hcf=i;

        }
    }

    lcm=(num1*num2)/hcf;
    cout<<"HCF = "<<hcf<<endl;
    cout<<"LCM = "<<lcm<<endl;

}