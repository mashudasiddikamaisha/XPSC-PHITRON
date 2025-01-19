#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,s,m;
      cin>>n>>s>>m;
      ll prev=0;
      bool flag=false;
      while(n--)
      {
        ll l,r;
        cin>>l>>r;
        if(l-prev >= s) flag=true;
        prev = r;
      }
      if(m-prev >= s) flag=true;
      if(flag) cout<<"YES\n";
      else cout<<"NO\n";
    }
    return 0;
}
