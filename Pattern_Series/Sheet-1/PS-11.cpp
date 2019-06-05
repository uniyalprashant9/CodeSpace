/*


sin (x) = (x - (x^3/3!) + (x^5/5!) - (x^7/7!) .....)

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    double term,sum=0;
    int x,n;
    cout<<"Enter x and n : ";
    cin>>x>>n;
    term = x;
    for (int i = 2; i <= n; i++)
    {
        term= ( (term*x*x)/( (2*i -1)*(2*i - 2) ) )* -1;
        sum+=term;
    }
    sum+=x;
    cout<<endl<<sum;
    return 0;
}