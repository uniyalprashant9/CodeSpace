#include<bits/stdc++.h>
using namespace std;
int FindMax(int *arr,int size,int *sec){
    int temp;
    if(size==0){
        return arr[0];
    }
    temp=FindMax(arr,size-1,sec);
    if(temp>arr[size]){
        if(*sec <arr[size] )
            *sec=arr[size];
        return temp;
    }
    else{ 
    if(*sec <temp )
        *sec=temp;
    return arr[size];
    }

}
int main(){
    int arr[10]={10,9,8,7,6,5,14,3,2,1},size=10,max,sec=INT_MIN;
    max=FindMax(arr,size-1,&sec);
    cout<<"\nSecond Max = "<<sec<<endl;
    return 0;
}