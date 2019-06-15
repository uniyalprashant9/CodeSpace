/*
Find hamming distance between 2 bin no.

5
11010
11101

=> 3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,count=0,j,flag=0;
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
    while(1)
    {
        if(flag==1){
            break;
        }
        j=size-1;
        arr1[j]+=1;
        count++;
        while(j>=0){
            if(arr1[j]>=2){
                arr1[j]=0;
                arr1[j-1]+=1;
                j--;
            }
            else
            {
                break;
            }
        }
        for(int k=0;k<size;k++)
        {
            if(arr1[k]==arr2[k])
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}