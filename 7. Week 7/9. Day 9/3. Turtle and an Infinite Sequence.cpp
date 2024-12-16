#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,m, ans=0;
      cin>>n>>m;
      for(int i=0;i<=30;i++)
      {
        ll x = n&((1LL<<(i+1))-1);
        ll t= (1LL<<i)-x;
        if(n>=(1LL<<i)) t=min(x+1,t);
        if(x>=(1LL<<i) || t<=m) ans |= (1LL<<i);
      }

      cout<<ans<<'\n';
    }
    return 0;
}
