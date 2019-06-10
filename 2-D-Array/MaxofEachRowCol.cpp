/*
Maximum of each row and column.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    r++;
    c++;
    long int arr[r][c];
    for (int i = 0; i < r-1; i++)
    {
        for (int j = 0; j < c-1; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < r-1; i++)
    {
        arr[i][c-1]=INT_MIN;
    }
    for (int i = 0; i < c-1; i++)
    {
        arr[r-1][i]=INT_MIN;
    }
    for (int i = 0; i < r-1; i++)
    {
        for (int j = 0; j < c-1; j++)
        {
            //row max
            if(arr[i][c-1]<arr[i][j])
                arr[i][c-1]=arr[i][j];

        }
    }

    for (int i = 0; i < c-1; i++)
    {
        for (int j = 0; j < r-1; j++)
        {
            //col max
            if(arr[r-1][i]<arr[j][i])
                arr[r-1][i]=arr[j][i];
        }
    }
    //row print
    for (int i = 0; i < r-1; i++)
    {
        cout<<arr[i][c-1]<<" ";
    }
    cout<<endl;
    //col print
    for (int i = 0; i < c-1; i++)
    {
        cout<<arr[r-1][i]<<" ";
    }
    cout<<endl;
    return 0;
}
