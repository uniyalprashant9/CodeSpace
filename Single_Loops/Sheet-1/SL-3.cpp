//Binary to decimal
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int bin;
    cin>>bin;
    int dec=0;
    int i=0,d;
    while (bin){
        d=bin%10;
        dec= dec + (d * pow(2,i));
        i++;
        bin=bin/10;
    }
    cout<<dec;
    return 0;
}