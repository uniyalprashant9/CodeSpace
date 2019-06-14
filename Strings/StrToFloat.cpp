#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],noDecimal=0,power=0;
    fgets(str,100,stdin);
    int length=strlen(str);
    float num=0.0;
    for (int i = 0; i < length-1; i++)
    {
        if(str[i]=='.'){
            power=1;
            noDecimal++;
        }
        else if(noDecimal==1){
            num+= (str[i] - '0') * pow(10,-power);
            power++;
        }
        else if(noDecimal>1)
            cout<<"Invalid I/P";
        else if(noDecimal==0){
            num= num * 10 + (str[i] - '0');
            power++;
        }
    }
    if(noDecimal==1)
        cout<<endl<<num;
    return 0;
}
