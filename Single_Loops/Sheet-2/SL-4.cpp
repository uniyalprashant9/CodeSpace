//Find element greater than mean of array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,l,r,count=0;
    cin>>size;
    int arr[size];
    for(int i =0; i<size; i++)
        cin>>arr[i];
    cin>>l>>r;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < r && arr[i]> l)
            count++;
    }
    cout<<count;
    return 0;
}