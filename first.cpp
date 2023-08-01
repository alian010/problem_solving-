#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len;
    cin>>s;
    len= s.length();
    for(int i=0; i<len; i++)
    {
        if  (s[i]=='H'|| s[i]=='Q'||s[i]=='9'||s[i]=='+')
        {
            cout<<"YES"<<endl;
            return 0;

        }
    }
    cout<<"NO"<<endl;
    return 0;
}
