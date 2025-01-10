#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll cnt = 0;
    multiset<ll> ml;
    for(int i=0;i<n;i++)
    {
      auto it= ml.upper_bound(a[i]);
      if(it==ml.end())
      {
        cnt++;
        ml.insert(a[i]);
      }
      else
      {
        ml.erase(it);
        ml.insert(a[i]);
      }
    }
    cout<<cnt;
    return 0;
}
