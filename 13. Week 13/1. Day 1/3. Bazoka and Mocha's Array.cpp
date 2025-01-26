#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      ll a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      ll mn = a[0], idx = n;
      vector<ll> v;
      v.push_back(mn);
      for(int i=1;i<n;i++)
      {
        if(mn<=a[i])
        {
          mn=a[i];
          v.push_back(mn);
        }
        else
        {
          idx = i;
          break;
        }
      }
      vector<ll> ans;
      for(int i=idx;i<n;i++)
      {
        ans.push_back(a[i]);
      }
      for(int i=0;i<v.size();i++)
      {
        ans.push_back(v[i]);
      }
      bool flag = false;
      for(int i=0;i<ans.size()-1;i++)
      {
        if(ans[i]>ans[i+1])
        {
          flag=true;
          break;
        }
      }
      if(flag) cout<<"NO\n";
      else cout<<"YES\n";
    }
    return 0;
}
