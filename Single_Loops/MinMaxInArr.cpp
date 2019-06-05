#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[10],size=10;
    cout<<"Enter 10 elements";
    for(int i =0;i<size;i++)
        cin>>arr[i];
    int max=INT_MIN,min=INT_MAX,a,b;
    for(int i=0;i<size;i=i+2){
        a=arr[i];
        b=arr[i+1];

        if(a>b){
            if(a>max){
                max=a;
            }
            if(b<min){
                min=b;
            }
        }
        else{
            if(b>max){
                max=b;
            }
            if(a<min){
                min=a;
            }
        }
    }
    cout<<max<<" "<<min;
    return 0;
}