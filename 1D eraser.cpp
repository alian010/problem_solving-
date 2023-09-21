#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int a,b,co=0;
        cin>>a>>b;
        string s;
        cin>>s;
        for (int j=0;j<=a;j++)
        {
            if (s[j]=='B')
            {
                co++;
                j+=b-1;
            }

        }
        cout<<co<<endl;


    }

}
