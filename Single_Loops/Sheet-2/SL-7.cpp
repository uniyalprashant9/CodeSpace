//reverse of an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int temp;
    for (int i = 0, j = size-1; i < j ; i++, j--)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}