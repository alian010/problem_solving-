#include<bits/stdc++.h>
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n= s.length();
        int cou=0;
        if (n%2!=0)
            cout<<"NO"<<endl;
        else
        {
            for(int i=0; i<n/2; i++)
            {
                if (s[i]!=s[i+n/2])
                {
                    cout<<"NO"<<endl;
                    break;
                }
                cou++;
            }
            if (cou==n/2)
                cout<<"YES"<<endl;
        }
    }

}

