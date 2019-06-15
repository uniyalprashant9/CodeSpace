//Check if array is palindrome or not
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1,flag=0;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Not Palindrome";
    }
    else
    {
        cout<<"Palindrome";
    }
    
    return 0;
}