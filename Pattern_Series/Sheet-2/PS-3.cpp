/*
1*2*3*417*18*19*20
  5*6*7*14*15*16
    8*9*12*13
      10*11
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,num,rev,nspace=0,temp;
  cin>>n;
  num=1;
  rev=n*(n+1);
  int x=n;
  for(int i=0;i<n;i++){
    for (int j = 0; j < nspace; j++)
    {
      cout<<" ";
    }
    for(int j=0;j<x;j++)
    {
      cout<<num<<"*";
      num++;
    }
    cout<<"\b";
    temp=rev-x+1;
    rev=temp;
    for(int j=0;j<x;j++)
    {
      cout<<"*"<<rev;
      rev++;
    }
    rev=temp-1;
    nspace+=2;
    x--;
    cout<<endl;
  }
  return 0;
}