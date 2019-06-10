#include<bits/stdc++.h>
using namespace std;
int FindMax(int *arr,int size){
    int temp,i;
    if(size%2==0)
        i=1;
    else i=2;

    if(size==1)
        return arr[1];
    temp=FindMax(arr,size-i);
    if(temp>=arr[size])
        return temp;
    else return arr[size];

}
int main(){
    int arr[10]={10,9,8,77,6,5,4,3,2,1},size=10,max;
    max=FindMax(arr,size-1);
    cout<<"\nMax of odd indexed elements = "<<max<<endl;
    return 0;
}