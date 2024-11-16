#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll answer(ll k, ll cnt)
{
  if(cnt<k) return 0;
  ll r =((cnt-k+1)*(cnt-k+2))/2;
  return r;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,k,q;
      cin>>n>>k>>q;
      ll a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      ll r=0, cnt=0, ans=0;
      while(r<n)
      {
        if(a[r]<=q) cnt++;
        else
        {
          ans+=answer(k,cnt);
          cnt=0;
        }
        if(r==n-1) ans+=answer(k,cnt);
        r++;
      }
      cout<<ans<<'\n';
    }
    return 0;
}
