#include<bits/stdc++.h>
using namespace std;
int FindMax(int *arr,int size,int *i){
    int temp;
    if(size==0){
        *i=size;
        return arr[0];
    }
    temp=FindMax(arr,size-1,i);
    if(temp>=arr[size])
        return temp;
    else{
        *i=size;
        return arr[size];
    }
}
int main(){
    int arr[10]={10,9,8,7,6,55,4,3,2,1},size=10,max,i=0;
    max=FindMax(arr,size-1,&i);
    cout<<"\nmax = "<<max<<" Index = "<<i<<endl;
    return 0;
}