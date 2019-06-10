#include<bits/stdc++.h>
using namespace std;
int sumArr(int *arr,int size){
    cout<<"1";
    if(size==0)
        return arr[0];
    
    cout<<"2";
    return sumArr(arr,size-1) + arr[size];
}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1},size=10,sum;
    sum=sumArr(arr,size-1);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\nSUM = "<<sum<<endl;
    return 0;
}