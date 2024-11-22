#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n = s.size();
      vector<vector<int>> a(26);
      for(int i=0;i<n;i++)
      {
        a[s[i]-'a'].push_back(i+1);
      }
      vector<int> ans;
      if(s[0]<=s[n-1])
      {
        for(int i = s[0]-'a';i<=s[n-1]-'a';i++)
        {
          for(auto v:a[i]) ans.push_back(v);
        }
      }
      else
      {
        for(int i = s[0]-'a';i>=s[n-1]-'a';i--)
        {
          for(auto v:a[i]) ans.push_back(v);
        }
      }
      cout<<abs(s[0]-s[n-1])<<" "<<ans.size()<<'\n';
      for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    }
    return 0;
}
