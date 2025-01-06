#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
    map<ll,ll> mp;
    mp[0]=1;
    ll cnt=0, sum=0, x=0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      x=((sum%n + n)%n);
      cnt+=mp[x];
      mp[x]++;
    }
    cout<<cnt<<'\n';
    return 0;
}
