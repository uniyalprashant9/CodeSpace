//Find element greater than mean of array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,count=0;
    float mean=0;
    cin>>size;
    int arr[size];
    for(int i =0; i<size; i++)
        cin>>arr[i];
    for (int i = 0; i < size; i++)
    {
        mean+=arr[i];
    }
    mean=mean/size;
    for(int i=0;i<size;i++){
        if(arr[i]>mean)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}