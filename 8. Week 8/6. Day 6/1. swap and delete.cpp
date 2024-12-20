#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string s;
    cin>>s;
    int n=s.size();
    map<char, int> mp;
    for(int i=0;i<n;i++)
    {
      mp[s[i]]++;
    }
    for(int i=0;i<=n;i++)
    {
      if(i==n || (s[i]=='0' && mp['1']==0) || (s[i]=='1' && mp['0']==0))
      {
        cout<<n-i<<'\n';
        break;
      }
      if(s[i]=='0') mp['1']--;
      else mp['0']--;
    }
  }
    return 0;
}
}
