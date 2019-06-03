/*

0
1 0
1 0 1
0 1 0 1

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num=0;
    cout<<"Enter no. of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<< " ";
            if(num == 0)
                num = 1;
            else 
                num = 0;
        }
        cout<<endl;
    }
    return 0;
}