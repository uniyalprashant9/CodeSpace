#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j =0;j<n;j++)
            cin>>arr[i][j];
    int k;
    cin>>k;
    int start_row,start_col;
    if(k<n){
        start_row=k;
        start_col=0;
    }
    else{
        start_row=n-1;
        start_col=k-n+1;
    }
    for(int i =0;i<n;i++){
        if(start_row<=0) break;
        if(start_col>=n)break;
        cout<<arr[start_row][start_col]<<" ";
        start_col++;
        start_row--;
    }
    return 0;
}