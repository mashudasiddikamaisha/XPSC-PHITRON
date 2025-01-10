#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x, n;
    cin>>x>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    set<pair<ll,ll>> s;
    multiset<ll> ml;
    s.insert({0,x});
    ml.insert(x);
    for(int i=0;i<n;i++)
    {
      ll p=a[i];
      auto it= s.upper_bound({p,0});
      it--;
      ll q = it->first, r=it->second;
      s.erase(it);
      auto w = ml.find(r-q);
      ml.erase(w);
      s.insert({q,p});
      s.insert({p,r});
      ml.insert(p-q);
      ml.insert(r-p);
      cout<<*ml.rbegin()<<" ";
    }
    return 0;
}
