#include <iostream>

using namespace std;

int main()
{
    int n,h=0,t=0,t1=0,f=0,o=0;
    cin>>n;
    while (n>0){
    if (n>=100){
        h=n/100;
        n=n%100;
    }
    else if ((n>=20)&&(100>n)){
        t=n/20;
        n=n%20;
        
    }
    else if ((n>=10)&&(20>n)){
        t1=n/10;
        n=n%10;
    }
    else if ((n>=5)&&(10>n)){
        f=n/5;
        n=n%5;
    }
    else if ((n>=1)&&(5>n))
    {
       o=n;
       break;
    }
    }
    cout <<h+t+t1+f+o<<endl;

    return 0;
}
