//sq root of a no.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n;
    int flag =1;
    for (int i = 2; i < n; i++)
    {
        d = i*i;
        if(d==n){
            cout<<i;
            flag=0;
            break;
        }

        if (d >n){
            flag=1;
            break;
        }
    }
    if (flag == 1)
        cout<<"Not Found";
    return 0;
}