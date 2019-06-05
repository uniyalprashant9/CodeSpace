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
            }
        }
        if (flag == 1 && n%j==0){
            cout<<j<< " ";
        }
    }
    return 0;
}