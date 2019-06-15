//Find index element in arr
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,key;
    cin>>size;
    int arr[size];
    for(int i =0; i<size; i++)
        cin>>arr[i];
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
