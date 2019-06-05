#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,limit,flag=1;
    cin>>n;
    limit = sqrt(n);
    for (int j = 1; j<=limit;j++)
    {
        if(n%j==0)
            cout<<j<<" ";
    }
    for (int j = limit; j>=1;j--)
    {
        if(n%j==0)
            cout<<n/j<<" ";
    }
    return 0;
}