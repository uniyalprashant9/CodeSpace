/*
    e^x = 1 + (x/1!) + (x^2 / 2!) + (x^3 /3!) + ...

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    double expx,term;
    int x,n;
    cout<<"Enter x and n : ";
    cin>>x>>n;
    term = x;
    for (int i = 3; i <= n; i++)
    {
        term = term*x/(i-1);
    }
    term++;
    expx = exp(term);
    cout<<endl<<expx;
    return 0;
}