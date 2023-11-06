#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count1=0,sum=0;
    cin>>n>>k;
    int m= 240-k;
    for(int i=1; i<=n; i++)
    {
        sum+=i*5;
        if (sum<=m)
            count1++;
    }
    cout <<count1<<endl;
}
