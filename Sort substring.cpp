#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s,res;

        cin>>s;
        for(int j=0; j<=s.size()-1; j++)
        {
            if ((j==0)||(j==s.size()-1))
            {
                res+=s[j];
            }
            else
            {
                if (s[j]==s[j+1])
                {
                    res+=s[j];
                    j++;
                }
            }
        }

        cout<<res;
        cout<<endl;
    }
    return 0;
}
