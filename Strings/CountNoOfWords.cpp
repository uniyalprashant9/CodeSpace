#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    int length=strlen(str);
    for (int i = 0; i < length; i++)
    {
        if((str[i]!=' ' && str[i+1]==' ') || (str[i]!=' ' && str[i+1]=='\0'))
            count++;
    }
    cout<<count;
    return 0;
}
