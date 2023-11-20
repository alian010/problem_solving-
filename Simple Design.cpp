#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,k;
        cin>>x>>k;
        while(x<=9)
        {
            if(x%k==0)
            {
                cout<<x<<endl;
                break;
            }
            else
            {
                x++;
            }
        }
        while(9<x)
        {
            int sum=0;
            int y=x;
            while(y!=0)
            {
                sum+=y%10;
                y/=10;
            }
            if (sum%k==0)
            {
                cout<<x<<endl;
                break ;
            }
            y++;
            x++;
        }
    }
}
