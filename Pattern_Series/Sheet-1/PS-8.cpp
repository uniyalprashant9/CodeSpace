/*

    *
   ***
  *****
 *******

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,nspace,toprint;
    cout<<"Enter no. of lines:";
    cin>>n;
    nspace=n-1;
    toprint=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nspace; j++){
            cout<<" ";
        }
        for(int j=1; j<=toprint; j++){
            cout<<"*";
        }
        nspace--;
        toprint+=2;
        cout<<endl;
    }
    return 0;
}