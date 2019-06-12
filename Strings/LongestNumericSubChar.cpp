#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int length=strlen(str),posS=0,posE=0;
    int s=0,e=0;
    for (int i = 0; i < length; i++)
    {
        posS=i;
        for(int j=posS;j<length;j++){
            if(!(str[j]>='0' && str[j]<='9')){
                posE=j-1;
                i=j;
                break;
            }
        }
        if(posE-posS > e-s){
            s=posS;
            e=posE;
        }
    }
    for (int i = s; i <=e; i++)
    {
        cout<<str[i];
    }
    
    return 0;
}
