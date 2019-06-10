#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char *arr,int left,int right){
    if(left == right || left > right) return true;
    if(arr[left] == arr[right])
        return isPalindrome(arr,left+1,right-1);
    return false;
}
int main(){
    int size;
    cin>>size;
    fflush(stdin);
    size++;
    char str[size];
    fgets(str,size,stdin);
    for (int i = 0; i < size-1; i++)
    {
        cout<<str[i];
    }
    if(isPalindrome(str,0,size-2))
        cout<<"\nPalindrome";
    else
        cout<<"\nNot Palindrome";
    return 0;
}