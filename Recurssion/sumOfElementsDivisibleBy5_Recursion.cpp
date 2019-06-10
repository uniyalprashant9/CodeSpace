#include<bits/stdc++.h>
using namespace std;
int sumArr(int *arr,int size){
    int x=0;
    if(size==0)
        return arr[0];
    if(arr[size]%5==0)
        x=arr[size];
    return sumArr(arr,size-1) + x;
}
int main(){
    int arr[10]={10,9,30,7,6,5,15,3,2,1},size=10,sum=0;
    sum=sumArr(arr,size-1);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\nSUM = "<<sum<<endl;
    return 0;
}