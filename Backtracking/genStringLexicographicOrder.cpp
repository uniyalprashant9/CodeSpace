#include<bits/stdc++.h>
using namespace std;
void genStringLexicographicOrder(char *str,int start,int end){
    if(start == end){
        str[start]='\0';
        cout<<str<<endl;
        return;
    }

    str[start]='0';
    genStringLexicographicOrder(str,start+1,end);

    str[start]='1';
    genStringLexicographicOrder(str,start+1,end);
}
int main(){
    int k;
    cin>>k;
    char str[k+1];
    str[k]='\0';
    genStringLexicographicOrder(str,0,k);
    return 0;
}