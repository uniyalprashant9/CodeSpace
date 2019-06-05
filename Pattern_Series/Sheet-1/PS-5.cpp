/*

1
3 2
6 5 4
10 9 8 7

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num=0,temp;
    cout<<"Enter no. of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        num = num + i;
        temp=num;
        for (int j =1 ; j<=i ; j++ )
        {
            cout << num << " ";
            num--;
        }
        num=temp;
        cout<<endl;
    }
    return 0;
}