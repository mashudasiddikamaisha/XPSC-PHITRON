#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      map<char,ll> mp;
      for(int i=0;i<n;i++)
      {
        mp[s[i]]++;
      }
      vector<pair<ll,char>> v;
      for(auto [x,y]:mp)
      {
        v.push_back({y,x});
      }
      sort(v.begin(), v.end());
      reverse(v.begin(), v.end());
      ll ind=0;
      string x(n,0);
      for(auto a:v)
      {
        ll frst = a.first;
        char sec = a.second;
        while(frst--)
        {
          if(ind>=n) ind=1;
          x[ind]=sec;
          ind+=2;
        }
      }
      cout<<x<<'\n';
    }
    return 0;
}
