//sum of first n terms of GP 2,4,8,16,32
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sn,a=2,r=2,n;
    cin>>n;
    sn = a*(pow(r,n) -1) / (r-1);
    cout<<sn;
    return 0;
}