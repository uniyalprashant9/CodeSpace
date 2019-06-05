//Finding max. till user inputs 0 or -ve no.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,max=INT_MIN;
    do{
        cin>>n;
        if(n<=0)
            break;
        if(max < n){
            max = n;
        }
        cout<<"Max is :"<<max<<endl;
    }while(1);
    return 0;
}