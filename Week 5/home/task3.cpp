#include<iostream>
using namespace std;
main()
{
    int num, count, totalDigits;
    cout<<"Enter a number : ";
    cin>>num;
    
    count= 0;
    if(num == 0){
        cout<<" 1";
    }
    
    if(num < 0){
        num=-num;
    }

    while(num>0){
        count = count+1;
        num = num/10;
    }
    cout<<count;
}