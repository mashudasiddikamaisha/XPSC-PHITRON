#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s,T;
      cin>>s>>T;
      if(s==T)
      {
        cout<<"YES\n";
        continue;
      }
      int pos=-1;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='1')
        {
          pos = i;
          break;
        }
      }
      if(pos != -1)
      {
        bool flag = false;
        for(int i=0;i<n;i++)
        {
          if(s[i]!=T[i])
          {
            if(pos > i)
            {
              flag = true;
              break;
            }
          }
        }
        if(!flag) cout<<"YES\n";
        else cout<<"NO\n";
      }
      else cout<<"NO\n";

    }
    return 0;
}
