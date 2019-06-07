#include<bits/stdc++.h>
using namespace std;
int power(int a,int n){
    if(n==2) return a*a;
    return power(a,n/2) * power(a,n/2);
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
}