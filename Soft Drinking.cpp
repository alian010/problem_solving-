#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a1,a2,a3,a4,a5;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a1=k*l;
    a2=a1/nl;
    a3=c*d;
    a4=p/np;
    a5=min(min(a2,a3),a4);
    cout<<a5/n;
}
