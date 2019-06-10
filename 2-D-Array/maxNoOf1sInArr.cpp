/*
    Maximum number of 1's in column
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    c++;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c-1; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < r; i++)
    {
        arr[c-1][i]=0;
        for (int j = 0; j < c-1; j++)
        {
            if(arr[j][i]==1)
             arr[c-1][i]++;
        }
    }
    int max=INT_MIN,pos=-1;
    for (int i = 0; i < r; i++)
    {
        if(arr[c-1][i] > max)
        {
            max=arr[c-1][i];
            pos=i;
        }
    }
    cout<<"Column:"<<pos+1;//not index
    return 0;
}
