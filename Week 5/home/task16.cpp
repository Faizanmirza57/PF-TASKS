#include<iostream>
using namespace std;
main()
{
   int n=5;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<n-j<<"";
        }
        cout<<endl;
    }
}