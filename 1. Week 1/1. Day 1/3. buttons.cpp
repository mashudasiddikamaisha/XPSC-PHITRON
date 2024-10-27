#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n=2,x=0;
    cin>>a>>b;
    while(n!=0)
    {
        if(a>=b)
        {
            x+=a;
            a--;
        }
        else
        {
            x+=b;
            b--;
        }
        n--;
    }
    cout<<x;
    return 0;
}
