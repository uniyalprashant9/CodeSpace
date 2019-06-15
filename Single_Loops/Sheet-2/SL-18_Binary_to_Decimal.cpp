//Convert binary to decimal
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    int dec=0;
    for (int i = n-1; i >=0; i--)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        dec += arr[i]*pow(2,i);
    }
    cout<<dec;
    return 0;
}