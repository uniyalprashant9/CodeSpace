/*
Merge 2 sorted array
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    int msize = m+n;
    int arr3[msize];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m){
        arr3[k]=arr1[i];
            i++;
            k++;
    }
    while (j<n)
    {
        arr3[k]=arr2[j];
            k++;
            j++;
    }
    for ( i = 0; i < msize; i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}