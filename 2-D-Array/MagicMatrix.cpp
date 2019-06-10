/*
MagicMatrix is a sq. matrix of size n which have elements from 1 to n^2 and
sum of each row, each column, and both diagonals are same.

3
2 7 6
9 5 1
4 3 8

MagicMatrix
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    r++;
    int arr[r][r];
    for (int i = 0; i < r-1; i++)
    {
        for (int j = 0; j < r-1; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < r-1; i++)
    {
        arr[i][r-1]=0;
        arr[r-1][i]=0;
        for (int j = 0; j < r-1; j++)
        {
            arr[i][r-1]+=arr[i][j];//rowsum
            arr[r-1][i]+=arr[j][i];//colsum
        }
    }
    int d1=0,d2=0;
    for (int i = 0; i < r-1; i++)
    {
        for (int j = 0; j < r-1; j++)
        {
            if(i==j)//d1 sum
                d1+=arr[i][j];
            if(i+j == r-2) //d2 sum
                d2+=arr[i][j];
        }
    }
    int flag=1;
    if(d1 == d2 && d1==arr[r-1][0] && d1==arr[0][r-1])
    {
        for(int i=0;i<r-1;i++){
            if(d1 != arr[r-1][i]){
                flag=0;
                break;
            }
        }
        for(int i=0;i<r-1;i++){
            if(d1 != arr[i][r-1]){
                flag=0;
                break;
            }
        }
    }
    else flag=0;
    if(flag==1)
        cout<<"MagicMatrix\n";
    else
        cout<<"Not MagicMatrix\n";
    return 0;
}
