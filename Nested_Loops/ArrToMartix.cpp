/*

10
2 5
1 2 3 4 5 6 7 8 9 10

1 2 3 4 5 
6 7 8 9 10 

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;
    int arr[n];
    cin>>r>>c;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i<n;i++){
        if(i%c==0)
            cout<<endl;
        cout<<arr[i]<<" ";
    }
    return 0;
}
