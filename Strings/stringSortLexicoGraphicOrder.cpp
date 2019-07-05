#include<bits/stdc++.h>
using namespace std;
bool compare (const string &s1, const string &s2) // & is used to prevent object copy which save time
                                                    //const is used to prevent modifications
{
    return s1.length()<s2.length();
}
int main(){
    string str[]={"hello","boi","yo","boii"};
    for(int i=0;i<4;i++){
        sort(str.begin(),str.end(),compare)   // or sort(str,str+4,compare);
    }
    for(int i=0;i<4;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}