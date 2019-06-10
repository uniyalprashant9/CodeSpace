#include<bits/stdc++.h>
using namespace std;
void reverseArr(int *arr,int left,int right){
    if(left == right) return;
    int temp;
    temp = *(arr+left);
    *(arr+left)=*(arr+right);
    *(arr+right)=temp;
    return reverseArr(arr,left+1,right-1);
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original arr: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    reverseArr(arr,0,size-1);
    cout<<"\nReversed arr: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}