/*
********
 *      *
  *      *
   *      *
    ********
    input: row column
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
   int r,c;
   cin>>r>>c;
   for(int i=0;i<c;i++)
      cout<<"*";
    cout<<endl;
    r=r-2;
   for(int i=1; i<=r; i++){
      for(int j = 1; j<=i ; j++)
        cout<< " ";
    cout<<"*";
      for(int j = 1; j<=c-2; j++)
        cout<<" ";
    cout<<"*";
    cout<<endl;
   }
   for(int j = 1; j<=r+1 ; j++)
        cout<< " ";
   for(int i=0;i<c;i++)
      cout<<"*";
  return 0;
}