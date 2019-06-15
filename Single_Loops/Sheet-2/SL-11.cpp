/*
A leader is a the value which is greater than all values to its right.
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[10],max=INT_MIN,size=10;
    cout<<"Enter 10 elements:";
    for(int i=0; i< size;i++){
        cin>>arr[i];
    }
    for(int i=size-1;i>=0;i--){
        if(max < arr[i]){
            cout<<arr[i]<< " ";
            max=arr[i];
        }
    }
    return 0;
}