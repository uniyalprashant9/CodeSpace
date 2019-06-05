/*

    *
   * *
  *   *
   * *
    *

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,nspace,toprint;
    cout<<"Enter no. of lines:";
    cin>>n;
    nspace=n-1;
    toprint=1;
    int temp =n;
    if(n%2 != 0)
        n=(n/2) + 1;
    else
        n = n/2;
    nspace=n-1;
    toprint=1;
    for(int j =0;j<=nspace;j++)
            cout<<" ";
    cout<<"*"<<endl;

    for(int i=2;i<=n;i++){
        for(int j =1;j<=nspace;j++)
            cout<<" ";
        cout<<"*";
        for (int j = 1; j <= toprint; j++)
        {
            cout<<" ";
        }
        cout<<"*";

        nspace--;
        toprint+=2;
        cout<<endl;
    }
    n=temp;
    n=(n/2);
    nspace=2;
    toprint=toprint-4;// 2 to be reduced and 2 are extra from previous loop

    for(int i=2;i<=n;i++){

        for(int j =1;j<=nspace;j++)
            cout<<" ";
        cout<<"*";
        for (int j = 1; j <= toprint; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        nspace++;
        toprint-=2;
        cout<<endl;
    }
    for(int j =1;j<=nspace;j++)
            cout<<" ";
    cout<<"*";
    return 0;
}