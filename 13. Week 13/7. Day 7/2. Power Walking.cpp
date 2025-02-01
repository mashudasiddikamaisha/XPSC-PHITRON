#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      int n;
      cin>>n;
      vector<ll> a(n);
      map<ll, ll> mp;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        mp[a[i]]++;
      }

      ll mx = mp.size();
      for(ll i=1;i<=n;i++) cout<<max(mx,i)<<" ";
      cout<<'\n';

    }
    return 0;
}
