#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int count =0;
        cin>>a>>b;
        while(a%b!=0){
             a++;
             count++;
        }

        cout<<count<<endl;


    }


}
