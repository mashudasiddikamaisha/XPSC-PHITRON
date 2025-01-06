#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int l=0, r=0;
    ll ans=0;
    map<int,int> mp;
    while(r<n)
    {
      mp[a[r]]++;
      while(mp.size()>k)
      {
        mp[a[l]]--;
        if(mp[a[l]]==0) mp.erase(a[l]);
        l++;
      }
      ans+= (r-l+1);
      r++;
    }
    cout<<ans<<'\n';
    return 0;
}
