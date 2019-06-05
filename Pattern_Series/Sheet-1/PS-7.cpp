/*

1
-2 3
4 -5 6
-7 8 -9 10

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num=1,count,sign=1;
    cout<<"Enter no. of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        count=1;
        for (int j =1 ; j<=i ; j++ )
        {
            if ((i % 2 == 0 && count %2!= 0) || (i % 2 != 0 && count %2 == 0) )
                sign = -1;
            else
                sign = 1;
            cout <<sign*num << " ";
            num++;
            count++;
        }
        cout<<endl;
    }
    return 0;
}