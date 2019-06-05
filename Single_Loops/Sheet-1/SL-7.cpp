//Twin primes : 2 consecutive prime no.s
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m,limit,j,flag=1;
    cin>>m>>n;
    // m<n
    for (j = m+1 ; j <= n; j++)
    {
        flag=1;
        limit = sqrt(j);
        for (int i=2;i<=limit;i++){
            if(j%i == 0){
                flag=0;
                break;
            }
        }
        if (flag == 1){
            break;
        }
    }
    if(j == n)
        cout<<"Yes";
    else
    {
        cout<< "No";
    }
    return 0;
}