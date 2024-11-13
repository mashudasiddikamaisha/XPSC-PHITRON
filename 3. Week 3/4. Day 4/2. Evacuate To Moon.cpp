#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
      int n,m,h;
      cin>>n>>m>>h;
      vector<ll> en(n), pr(m);
      for(int i=0;i<n;i++) cin>>en[i];
      sort(en.rbegin(), en.rend());
      for(int i=0;i<m;i++) cin>>pr[i];
      sort(pr.rbegin(), pr.rend());
      int N= min(n,m);
      ll ans=0;
      for(int i=0;i<N;i++)
      {
        ans+= min(h*pr[i], en[i]);
      }
      cout<<ans<<'\n';

    }
    return 0;
}
