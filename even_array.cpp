#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int x,c=0,f=0;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
        for(int k=0;k<x;k++)
        {
            if (k%2!=arr[k]%2)
            {
                if (arr[k]%2==1)
                {
                   c++;
                }
                else{
                    f++;
                }
            }
        }
        if (c!=f)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<f<<endl;
        }

    }



}
