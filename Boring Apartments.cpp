#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));using namespace std;
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int rem=x%10;
        int digit=0;
        while(x>0)
        {
            digit++;
            x/=10;
        }
        //int res= rem-1;
        if (digit==1)
            cout<<(rem-1)*10+1<<endl;
        else if(digit==2)
            cout<<(rem-1)*10+3<<endl;
         else if(digit==3)
            cout<<(rem-1)*10+6<<endl;
         else if(digit==4)
            cout<<(rem-1)*10+10<<endl;


    }
}
