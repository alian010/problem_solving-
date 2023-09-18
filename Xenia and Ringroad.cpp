#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    unsigned long long  moves=0;
    int current=1;
    for(int i=0;i<a;i++)
    {
        int gol;
        cin>>gol;
        if (gol-current>=0)
        {
            moves+=gol-current;
            current =gol;
        }
        else
            moves+=gol-current+n;
        current =gol;
        }
    cout <<moves;

}
