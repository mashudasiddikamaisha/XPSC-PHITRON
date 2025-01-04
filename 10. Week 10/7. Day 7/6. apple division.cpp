#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(vector<ll> &a, ll n, ll i, ll s1, ll s2)
{
  if(i==n) return abs(s1-s2);
  ll x=fun(a,n,i+1,s1+a[i], s2);
  ll y=fun(a, n, i+1, s1, s2+a[i]);
  return min(x,y);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    ll ans = fun(a, n, 0,0,0);
    cout<<ans<<'\n';
    return 0;
}
