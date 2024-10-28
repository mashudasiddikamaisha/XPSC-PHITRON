#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,x=0;
    cin>>a>>b>>t;
    for(int i=a; i<=t;i+=a)
    {
        x+=b;
    }
    cout<<x;
    return 0;
}
