//Delete kth element of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,k;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    if(k>size){
        cout<<"Invalid index";
    }
    else
    {
        for(int i=k;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}