#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1=0,n2=0,n3=0,n4=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if (x==1)
            n1++;
        if(x==2)
            n2++;
        if(x==3)
            n3++;
        if(x==4)
            n4++;
    }
    // cout<<n1<<n2<<n3<<n4;
    int co=0;
    while(n--)
    {
        if((n1>0) && (n3>0))
        {
            co++;
            n1--;
            n3--;
        }
        else if((n1>0) && (n2>0))
        {
            while(n1>0 && n2>0)
            {
                if (n1>=2)
                {
                    co++;
                    n2--;
                    n1-=2;
                }
                else
                {
                    co++;
                    n1--;
                    n2--;
                }
            }

        }
        else if (n2>0)
        {
            co++;
            n2--;
            n2--;
        }
        // else if (n2>0)
        // {
        //    co++;
        //     n2--;
        // }
        else if (n3>0)
        {
            co++;
            n3--;
        }
        else if (n4>0)
        {
            co++;
            n4--;
        }


    }
    while(n1)
    {
        if (n1>=4)
        {
            co++;
            n1-=4;
        }
        else if(n1==3)
        {
            co++;
            n1-=3;
        }
        else if(n1==2)
        {
            co++;
            n1-=2;
        }
        else if(n1==1)
        {
            co++;
            n1--;
        }
    }
    cout<<co<<endl;

}
