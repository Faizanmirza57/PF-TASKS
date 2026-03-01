#include<iostream>
using namespace std;
main()
{
    int mb,kb,bytes,bits;
    cout<<"Enter the size in megabytes(MB): ";
    cin>>mb;
    kb=mb*1024;
    bytes=kb*1024;
    bits=bytes*8;
    cout<<mb<<" MB is equivalent to "<<bits<<" bits "; 
    
}