#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin>>n>>k;
    vector<ll> a(n);

    for(int i=0;i<n;i++) cin>>a[i];
    ll l=0, r=0, ans=0, sum=0;
    while(r<n)
    {
      sum+=a[r];
      if(sum<=k)
      {
        ans = max(r-l+1, ans);
      }
      else
      {
        sum-=a[l];
        l++;
      }
      r++;
    }
    cout<<ans<<'\n';
    return 0;
}
