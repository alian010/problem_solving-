#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,co=1;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(i%2==1)
            {
                
                if(co%2==1)
                {
                    if(j<=b-2)
 
                    {
                        cout<<".";
                    }
                    else
                    {
                        cout<<"#";
                        co++;
                    }
 
 
                }
                else{
                    if (j==0)
                    {
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                        if (b-j-1==0)
                        {
                            co++;
                        }
                    }
                }
               
            }
            else
            {
                cout<<"#";
            }
 
 
        }
        cout<<endl;
 
    }
 
}

