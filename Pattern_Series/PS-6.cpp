/*

1
-2 -3
4 5 6
-7 -8 -9 -10

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num=1,temp,sign=1;
    cout<<"Enter no. of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i % 2 == 0)
            sign = 1;
        else 
            sign = -1;
        for (int j =1 ; j<=i ; j++ )
        {    
            cout <<sign*num << " ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}