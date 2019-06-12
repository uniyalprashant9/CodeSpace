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
        if(str[i]>='0' && str[i]<='9')
            count++;
    }
    cout<<count;
    return 0;
}
