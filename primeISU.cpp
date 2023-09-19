#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p=100000;
    vector<bool>isprime(p,true);
    vector<int>result;
    isprime[0]=isprime[1]=false;
 
        for (int i=2; i<p; i++)
        {
            if(isprime[i]==1)
            {
                result.push_back(i);
                for(int j=2*i; j<p; j=j+i)
                {
                    isprime[j]=0;
                }
            }
        }
 
           int l=0;
       for (int i=0;i<n;i++)
       {
           int k=1;
 
           while(k!=0)
           {
               if (result[l]+2==result[l+1])
               {
                   cout<<result[l]<<" "<<result[l+1]<<endl;
                   k=0;
                   l++;
               }
               else
               {
                   l++;
 
               }
           }
 
       }
 
 
    return 0;
}
