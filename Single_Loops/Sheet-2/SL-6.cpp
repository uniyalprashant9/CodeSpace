//Elements present in first arr and  not in second arr
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,flag=0;
    cin>>size;
    int arr1[size],arr2[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+size);
    sort(arr2,arr2+size);
    for (int i=0 ; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag == 0){
            cout<<arr1[i]<<" ";
        }
        flag=0;
    }
    return 0;
}