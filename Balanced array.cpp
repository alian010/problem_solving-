#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,even=0,odd=0;
        cin>>n;
        if ((n<=2)||(n/2)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            for (int i=0;i<n/2;i++)
            {
                even+=2;
                cout<<even<<" ";
                sum+=even;
            }
            for(int j=1;j<n-1;j+=2)
            {
                odd+=j;
                cout<<j<<" ";
            }
            cout<<sum-odd<<endl;

    }

}
}
