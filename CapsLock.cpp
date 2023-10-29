#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cr=0,d=0;
    for(int i=0;i<s.size();i++)
    {
        if (islower(s[i]))
        {
            cr++;
        }
        else
        {
            d++;
        }
    }
    if (islower(s[0]) && cr==1)
    {
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else if (d==s.size())
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
}
