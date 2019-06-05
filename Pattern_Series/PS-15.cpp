//nth term of GP 2,4,8,16,32
#include <bits/stdc++.h>
using namespace std;
int main(){
    int tn,a=2,r=2,n;
    cin>>n;
    tn = a * pow(r,n-1);
    cout<<tn;
    return 0;
}