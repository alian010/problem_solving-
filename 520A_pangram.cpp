#include <iostream>
#include <string>
#include<set>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  set < char >v;
  if (n >= 26)
    {
      for (int i = 0; i < n; i++)
	{
	    
	    v.insert(tolower(s[i]));
	}
	if (v.size()==26){
	    cout<<"YES"<<endl;
	}
	else {
	    cout<<"NO"<<endl;
	}

    }
  else
    {
      cout << "NO" << endl;
    }

  return 0;
}
