#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,a,b,c,d;
    cin>>y;
    while(true)
    {
        y+=1;
        a=y/1000;
        b=y%1000/100;
        c=y%1000%100/10;
        d=y%1000%100%10%10;
        if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            break;
        }


    }
    cout<<y<<endl;


}
