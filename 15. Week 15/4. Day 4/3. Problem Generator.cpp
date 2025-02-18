#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;
      int ans = 0;
      map<char,int> mp;
      for(int i=0;i<n;i++) mp[s[i]]++;
      for(char i='A';i<='G';i++) ans += max(0, m-mp[i]);
      cout<<ans<<'\n';
    }

    return 0;
}
