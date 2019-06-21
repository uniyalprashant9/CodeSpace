#include<bits/stdc++.h>
using namespace std;
void genString(char *str,int start,int end){
    if(start == end){
        str[start]='\0';
        cout<<str<<endl;
        return;
    }
    if(str[start-1]=='1'){
        str[start]='0';
        genString(str,start+1,end);
    }
    else{
    str[start]='0';
    genString(str,start+1,end);

    str[start]='1';
    genString(str,start+1,end);
    }
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    str[k]='\0';
    str[0]='0';
    genString(str,1,k);
    str[0]='1';
    genString(str,1,k);
    return 0;
}