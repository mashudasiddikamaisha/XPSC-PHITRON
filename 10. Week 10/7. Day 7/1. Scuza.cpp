#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,q;
      cin>>n>>q;
      vector<ll> a(n), pre(n+1), mx(n+1);

      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=1;i<=n;i++)
      {
        pre[i]=pre[i-1]+a[i-1];
        mx[i]=max(mx[i-1],a[i-1]);
      }
      while(q--)
      {
        ll x;
        cin>>x;
        auto i= upper_bound(mx.begin(), mx.end(), x)-mx.begin()-1;
        cout<<pre[i]<<" ";

      }
      cout<<'\n';
    }
    return 0;
}
