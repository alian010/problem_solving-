#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int fs=0,ls=0;
        cin>>s;
        for(int i=0;i<3;i++)
        {
            fs+=s[i];
        }
        for(int i=3;i<6;i++)
        {
            ls+=s[i];
        }
        if(ls==fs)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
