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
      ll a[n];
      set<ll> s;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++) s.insert(a[i]);
      if(s.size()==1) cout<<"YES\n";
      else
      {
        vector<ll> v;
        for(auto x:s)
        {
          v.push_back(x);
        }
        ll p = 1;
        for(int i=0;i<v.size();i++)
        {
          if(v[i]%v[0]!=0)
          {
            p=v[i];
            break;
          }
        }
        bool flag=true;
        for(int i=0;i<v.size();i++)
        {
          if(v[i]%v[0]!=0 && v[i]%p!=0)
          {
            flag = false;
            break;
          }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
      }

    }
    return 0;
}
