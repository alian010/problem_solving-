#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>a,b;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            a.push_back(arr[i]);
        }
        else
        {
            b.push_back(arr[i]);
        }
    }
    if (a.size()>b.size())
    {
        for (int i=0; i<n; i++)
        {
            if (arr[i]%2==1)
            {
                cout<<i+1<<endl;
            }

        }
    }
    else
    {
        for(int i=0 ; i<n; i++)
        {
            if (arr[i]%2==0)
            {
                cout<<i+1;
            }
        }
    }

}
