#include<bits/stdc++.h>
using namespace std;
int p=0;
int reverse(int n){
    if(n==0)
        return 0;
    else
    {
        return  reverse(n/10) + (n%10)*pow(10,p++);
    }
}
int main(){
    int n;
    cin>>n;
    p=0;
    cout<<reverse(n);
    return 0;
}