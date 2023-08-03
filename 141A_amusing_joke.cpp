#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,s1,s2,st;
    int co=0;
    cin>>s>>s1>>s2;
    st=s+s1;
    sort(st.begin(),st.end());
    sort(s2.begin(),s2.end());
    int len,len2;
    len=st.size();
    len2=s2.size();
    int ma=max(len,len2);
    for(int i=0;i<ma;i++)
    {
        if (st[i]==s2[i])
        {
            co++;
        }
        else{
            break;
        }
    }
    if (len2==len)
    {
        if(co==len)
        {
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    
  
    return 0;
}
