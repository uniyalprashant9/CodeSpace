#include<bits/stdc++.h>
using namespace std;
int FindMax(int *arr,int size){
    int temp;
    cout<<"1";
    if(size==0)
        return arr[0];
    cout<<"2";
    temp=FindMax(arr,size-1);
    cout<<"3";
    if(temp>=arr[size])
        return temp;
    else return arr[size];

}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1},size=10,max;
    max=FindMax(arr,size-1);
    cout<<"\nmax = "<<max<<endl;
    return 0;
}