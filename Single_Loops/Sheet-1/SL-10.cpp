//Co-prime nos.
#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,n,min,flag=1;;
    cin>>m>>n;
    min = m;
    if(min>n)
        min = n;
    for (int j = 2; j<=n;j++)
    {
        if(n%j == 0 && m%j==0)
        {
            flag =0;
        }
    }
    if (flag == 0)
        cout<<"Not Co-prime";
    else
        cout<<"Co prime";
    return 0;
}