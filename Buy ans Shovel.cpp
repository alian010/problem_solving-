#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int i=1;
    while(1)
    {
        int s= i*k;
        if ((s%10==r)||(s%10==0))
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }
}
