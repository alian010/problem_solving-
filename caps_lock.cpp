#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    string a;
    getline(cin,a);
    for(int i=1;i<a.size()-1;i++)
    {
         if(a[i]>='a' && a[i]<='z')
          s.insert(a[i]);
    }
    cout<<s.size();

}
