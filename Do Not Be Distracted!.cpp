#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));using namespace std;
using namespace std;

void solve(){
    int n,cou=0;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    //set<char>s1;
    for(int i=0;i<n;i++)
    {
        char a;
        a=s[i];
        if(mp.count(a)==0 && s[i]!=s[i+1]){
            mp[a]=1;
            cou++;
           // s1.insert(a);
        }
        else if(mp.count(a)!=0){
           cout<<"NO"<<endl;
           break;
        }
        if(i==s.size()-1)
            cout<<"YES"<<endl;
    }

}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;

}
