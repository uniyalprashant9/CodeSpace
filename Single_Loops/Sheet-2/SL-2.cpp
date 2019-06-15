//Find element greater than its neighbour.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i =0; i<size; i++)
        cin>>arr[i];
    for(int i=1;i<size-1;i++){
        if(arr[i]>arr[i+1] && arr[i-1]<arr[i] )
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}
