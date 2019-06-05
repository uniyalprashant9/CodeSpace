//Next 10 terms of AZ,CY,EX,GW,IV, ....
#include <bits/stdc++.h>
using namespace std;
int main(){
    char t1='A',t2='Z';
    cout<<t1<<t2;
    for (int i=2; i<= 15;i++){
        t1+=2;
        t2-=1;
        cout<<","<<t1<<t2;
    }
    return 0;
}