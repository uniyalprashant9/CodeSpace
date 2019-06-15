/*
Highest strike rate.
given runs and no of balls
*/
#include<bits/stdc++.h>
using namespace std;
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
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max < (arr1[i]/arr2[i])*100){
            max = (arr1[i]/arr2[i])*100;
        }
    }
    cout<<max;
    return 0;
}