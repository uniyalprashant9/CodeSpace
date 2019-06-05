//sum of first 2k terms in series 2,10,6,20,18,40,54,80....
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,s1,s2,sum=0,term;
    cout<<"Enter k: ";
    cin>>k;
    k*=2;
    s1=2;
    s2=10;
    sum=12;
    if(k==1){
        cout <<s1;
        term = s1;
        sum = s1;
    }
    else if (k == 2)
    {
        cout <<s1 <<","<<s2;
        term = s2;
        sum = s1 + s1;
    }
    else
    {
        cout <<s1 <<","<<s2;
        for (int i = 3; i <= k; i++){
            if(i % 2 == 0){
                s2*=2;
                term =s2;
                sum+=s2;
            }
            else
            {
                s1*=3;
                term=s1;
                sum+=s1;
            }
            cout<<","<<term;
        }
    }
    cout <<endl << "Sum= " << sum;
    return 0;
}