/*
XOR of 2 binary no.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr1[size],arr2[size],xr[size];
    for (int i = 0; i <size; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i <size; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i <size; i++)
    {
        xr[i] = arr1[i]^arr2[i];
    }
    for (int i = 0; i <size; i++)
    {
        cout<<xr[i]<<" ";
    }
    return 0;
}