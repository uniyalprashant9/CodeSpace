//Sum of factorial of digits.
#include <bits/stdc++.h>
using namespace std;
int fact(int num){
    int fact =1;
    for(int i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}

int main(){
    int n,d,sum=0;
    cin>>n;
    while(n){
        d=n%10;
        sum+=fact(d);
        n=n/10;
    }
    cout<<sum;
    return 0;
}