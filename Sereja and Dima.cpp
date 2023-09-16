#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sere=0,dim=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    int k=0;
    while(l<=r)
    {
        if(k%2==0)
        {
            if (arr[l]>arr[r])
            {
                sere=sere+arr[l];
                l++;
            }
            else
            {
                sere=sere+arr[r];
                r--;

            }
        }
        else
        {
            if (arr[l]>arr[r])
            {
                dim=dim+arr[l];
                l++;
            }
            else
            {
                dim=dim+arr[r];
                r--;
            }
        }
        k++;
    }
    cout <<sere<<" "<<dim<<endl;
}
