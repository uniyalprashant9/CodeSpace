#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],temp;
    fgets(str,100,stdin);
    int length=strlen(str);
    for (int i = 0,j=length-1; i < j; i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
    return 0;
}
