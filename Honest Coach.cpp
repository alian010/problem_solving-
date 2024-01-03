#include<bits/stdc++.h>
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;



int main()
{
    fastread();
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int mi=10000;
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               mi=min(mi,abs(arr[i]-arr[j]));
           }
       }
       cout<<mi<<endl;

   }
}
