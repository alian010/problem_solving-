#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum =a+b;
    int m =min(a,b);
    int k = (sum-(m*2))/2;
    cout <<m<<" "<<k<<endl;
}
