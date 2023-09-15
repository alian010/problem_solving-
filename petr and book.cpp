#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k(0),res;
    cin>>n;
    int arr[n];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    int t=arr[0];
    while(t<n)
    {
        k++;
        k=k%7;
        t+=arr[k];
    }
    cout<<k+1<<endl;


}
