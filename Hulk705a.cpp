#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    string s1,s2;
   // s1= "I hate it";
    //s2="I hate that I love it";
    cin>>n;
    if (n==1){
        cout<<"I hate it ";
    }
    else {
        cout<<"I hate that ";
    }
    for(int i=2;i<n;i++){
        if (i%2==0){
            cout<<"I love that ";
        }
        else if (i%2==1){
            cout<<"I hate that ";
        }
    }
    if (n%2==0 && n>1){
        cout <<"I love it";
    }
    else if (n>1){
        cout <<"I hate it";
    }
    cout<<endl;


}
