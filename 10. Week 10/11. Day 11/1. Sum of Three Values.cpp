#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n;
  ll x;
  cin>>n>>x;
  vector<pair<ll,int>> a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i].first;
    a[i].second = i+1;
  }
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++)
  {
    ll t=x-a[i].first, k=n-1;
    for(int j=i+1;j<k;j++)
    {
      while(a[j].first+a[k].first>t) k--;
      if(j<k && a[j].first+a[k].first==t)
      {
        cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second;
        return 0;
      }
    }
  }
  cout<<"IMPOSSIBLE";
  return 0;
}
