#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));using namespace std;
using namespace std;
vector<bool>isPrime(50,true);
vector<int>result;
void seve()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<=50; i++)
    {
        if (isPrime[i]==true)
        {
            result.push_back(i);
            for(int j=i*2;j<=50;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}

void solve()
{
    int n,m,res;
    cin>>n>>m;
    for(int i=0;i<50;i++)
    {
        if(n==result[i])
        {
            res=i;
            break;
        }
    }
    if (result[res+1]==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

int main()
{
    fastread();
    seve();
    solve();

}
