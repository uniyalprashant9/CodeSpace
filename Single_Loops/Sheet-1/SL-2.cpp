//Sum of digits
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d,sum=0;
    cin>>n;
    while(n){
        d=n%10;
        sum+=d;
        n=n/10;
    }
    cout<<sum;
    return 0;
}