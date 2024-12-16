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
      string s;
      cin>>s;
      ll cnt=0;
      for(int i=0;i<n/2;i++)
      {
        if(s[i]!=s[n-1-i]) cnt++;
      }
      ll x= n+1-cnt;
      for(int i=0;i<=n;i++)
      {
        if(n%2==0)
        {
          if(i<cnt) cout<<0;
          else
          {
            if(i==cnt) cout<<1;
            else if((i-cnt)%2==0 && i<x) cout<<1;
            else cout<<0;
          }
        }
        else
        {
          if(i<cnt) cout<<0;
          else
          {
            if(i<x) cout<<1;
            else cout<<0;
          }
        }
      }
      cout<<'\n';
    }
    return 0;
}
