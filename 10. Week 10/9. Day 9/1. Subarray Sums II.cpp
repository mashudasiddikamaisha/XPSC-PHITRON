#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    map<ll,ll> mp;
    mp[0]=1;
    ll cnt=0, sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      cnt+=mp[sum-x];
      mp[sum]++;
    }
    cout<<cnt<<'\n';
    return 0;
}
