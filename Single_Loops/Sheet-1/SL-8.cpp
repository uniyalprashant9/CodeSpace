//A number is semi-prime if it is a  product of prime nos. eg. 10 => 2*5
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int flag = 1; // for prime
    int limit2= sqrt(n);
    for (int i=2;i<=limit2;i++){
        if(n%i==0){
            flag=0; // not prime
            break;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
}
int main (){
    int n,limit,limit2,flag=0,x;
    cin>>n;
    limit = sqrt(n);
    for (int j = 2; j<=limit;j++)
    {
        x=n/j;
        if(j * x == n && isPrime(j) && isPrime(x)){
            cout<<n<<" is semi-prime =>"<< j << "*"<< x;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Not semi-prime";
    return 0;
}