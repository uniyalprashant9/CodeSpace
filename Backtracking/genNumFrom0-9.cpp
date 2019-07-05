#include<bits/stdc++.h>
using namespace std;
void genString(char *str,int start,int end){
    if(start == end){
        str[start]='\0';
        if(str[0]!='0')
            cout<<str<<endl;
        return;
    }

    for(int i=0;i<=9;i++){
        str[start]= i + '0';
        genString(str,start+1,end);
    }
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    genString(str,0,k);
    return 0;
}