// Input first 3 terms of AP and find sum and n terms 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sn,ti,d,n,d1;
    int x,y,z;
    cin>>n;
    cin>>x>>y>>z;
    d=y-x;
    d1=z-y;
    sn = x+y+z;
    cout<<endl<<x<<","<<y<<","<<z;
    ti=z;
    if(d == d1 ){
        for (int i = 4; i<=n ;i++){
            ti+=d;
            sn+=ti;
            cout<<","<<ti;
        }
    }
    else
    {
        cout<<"Invalid AP.";
    }
    
    cout<<endl<<sn;
    return 0;
}