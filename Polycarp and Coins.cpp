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
        int divided = n/3;
        if (divided + 2* divided==n)
            cout<<divided <<" "<<divided<<endl;
        else if (divided+1 +divided*2==n)
        {
            cout<<divided+1<<" "<<divided<<endl;
            /*int div1=divided;
            int div2= divided;
            /*int div2=
            while(div1 +div2*2!=n)
            {
                div1++;
            }
            cout<<dive1<<" "<<div2<<endl;

            if (div1+1+ div2)
          */
        }
        else if (divided+2*(divided+1)==n)
            cout<<divided<<" "<<divided+1<<endl;
    }

}

