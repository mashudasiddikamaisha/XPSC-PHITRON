#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s = "aeiou";
      int x=n/5, y=n%5;
      string ans="";
      while(x--)
      {
        ans+=s;
      }
      for(int i=0;i<y;i++)
      {
        ans+=s[i];
      }
      sort(ans.begin(),ans.end());
      cout<<ans<<'\n';
    }
    return 0;
}
