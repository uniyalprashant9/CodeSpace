#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int a){
    if(a == 0) return 0;
    return a%10 + sumOfDigits(a/10);
}
int main(){
    int a;
    cin>>a;
    cout<<sumOfDigits(a);
}