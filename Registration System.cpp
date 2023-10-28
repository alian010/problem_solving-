#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>map1;
    string s;
    while(n--)
    {
        cin>>s;
        if(map1.count(s)==0)
        {
            cout<<"OK"<<endl;
            map1[s]=1;
        }
        else{
            cout<<s<<map1[s]<<endl;
            map1[s]+=1;
        }
    }
}
