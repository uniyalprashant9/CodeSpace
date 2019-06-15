/*
if both elements are even : modify first arr by the sum of both the elements
if both elements are odd : modify first arr by the product of both the elements
e.g
5
10 5 7 18 6
2 3 4 5 8
==>
12 15 7 8 14
*/
#include<bits/stdc++.h>
using namespace std;
bool isEven(int x)
{
    if(x%2==0)
        return true;
    else
        return false;
}
int main()
{
    int size;
    cin>>size;
    int arr1[size],arr2[size];
    for (int i = 0; i <size; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i <size; i++)
    {
        cin>>arr2[i];
    }
    for(int i=0; i<size;i++){
        if(isEven(arr1[i]) && isEven(arr2[i]))
            arr1[i]+=arr2[i];
        else if (!isEven(arr1[i]) && !isEven(arr2[i]))
        {
            arr1[i]*=arr2[i];
        }
    }
    for (int i = 0; i <size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}