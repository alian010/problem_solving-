#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));using namespace std;
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        sort (arr,arr+x);
        cout<<arr[x-1]-arr[0]<<endl;
    }
}
