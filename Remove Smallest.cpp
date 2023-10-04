#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t)
    {
        int n,count =0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i=0; i<n-1; i++)
        {
            if (n==1)
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                if ((abs(arr[i+1]-arr[i])==1)||(arr[i+1]-arr[i]==0))
                {
                    count++;
                }
                else
                {
                    cout <<"NO"<<endl;
                    break;
                }
            }
            
        }
        if (count==n-1)
            {
                cout<<"YES"<<endl;
            }
        t--;
    }
}
