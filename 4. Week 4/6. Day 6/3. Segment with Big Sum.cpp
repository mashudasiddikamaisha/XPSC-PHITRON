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
    int l=0, r=0, ans=INT_MAX;
    ll sum=0;
    while(r<n)
    {
      sum+=a[r];
      if(sum>=k)
      {
        bool flag = false;
        while(sum>=k)
        {
          sum-=a[l];
          l++;
          if(sum<=k) flag = true;
        }
        if(flag) ans = min(ans, (r-l+2));
        else ans = min(ans, (r-l+1));
      }
      r++;
    }
    if(ans == INT_MAX) cout<<-1<<'\n';
    else cout<<ans<<'\n';
    return 0;
}
