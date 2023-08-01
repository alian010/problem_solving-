#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if (a==1)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
}
