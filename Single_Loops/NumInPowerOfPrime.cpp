#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,limit,countP;
    cin>>n;
    limit = sqrt(n);
    for (int i=2;i<=limit;i++){
        countP=0;
        while(n%i==0){
            n=n/i;
            countP++;
        }
        if (countP)
            cout<<i<<"^"<<countP<<" ";
    }
    return 0;
}