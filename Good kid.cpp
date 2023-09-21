#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,res=1;
    cin>>n;
   for (int i=0;i<n;i++)
   {
       long long int res=1;
       int x;
       cin>>x;
       int arr[x];
       for (int j=0;j<x;j++)
       {
           cin>>arr[j];
       }
       sort (arr,arr+x);
       arr[0]=arr[0]+1;
       for (int k=0;k<x;k++)
       {
           res*=arr[k];
       }
       cout <<res<<endl;
   }



    return 0;
}
