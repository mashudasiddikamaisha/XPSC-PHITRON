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
    int l=0, r=0;
    ll sum=0, ans=0;
    while(r<n)
    {
      sum+=a[r];
      while(sum>=k && l<=r)
      {
          sum-=a[l];
          l++;
      }
      ans+=l;
      r++;
    }
    cout<<ans<<'\n';
    return 0;
}
