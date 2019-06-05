#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,limit,limit2,flag=1;
    cin>>n;
    limit = sqrt(n);
    for (int j = 2; j<=limit;j++)
    {
        flag = 1; // for prime
        limit2= sqrt(j);
        for (int i=2;i<=limit2;i++){
            if(j%i==0){
                flag=0; // not prime
                break;
            }
        }
        if (flag == 1 && j * int(n/j) == n ){
            cout<<'('<<j<<','<<n/j<<')';
        }
    }
    return 0;
}