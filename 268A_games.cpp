#include <iostream>
#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
int main()
{
    int n,count=0;
    cin>>n;
    vector<int>arr2,arr1;
    for (int i=1;i<=n*2;i++)
    {
        int x;
        if (i%2==1)
        {
             cin>>x;
             arr1.push_back(x);
        }   
        
        else
        {
            cin>>x;
            arr2.push_back(x);
        }
        
    }
    
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr1[i]==arr2[j])
            {
                count++;
            }
        }
        
    }
    cout<<count;
 
 
 
    return 0;
}
