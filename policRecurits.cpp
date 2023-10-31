#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,psum=0,posum=0,co=0;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if (x>-1)
        {
            psum+=x;
        }
        else if (psum>0)
        {
            psum=psum-abs(x);
        }
        else
        {
            co++;
        }
    }
    cout<<co<<endl;
}
