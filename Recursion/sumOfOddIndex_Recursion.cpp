#include<bits/stdc++.h>
using namespace std;
int sumArr(int *arr,int size){
    int x=0;
    if(size==0)
        return arr[0];
    if(size%2 !=0)
        x=arr[size];
    return sumArr(arr,size-1) + x;
}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9},size=10,sum;
    sum=sumArr(arr,size-1);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\nSUM = "<<sum<<endl;
    return 0;
}