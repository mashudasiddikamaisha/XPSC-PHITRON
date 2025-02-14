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
      int a=0;
      while(a<n && s[a]=='1') a++;
      if(a==n)
      {
        if(a==4) cout<<"YES\n";
        else cout<<"NO\n";
      }
      else
      {
        int x = a-1;
        if(x*x == n) cout<<"YES\n";
        else cout<<"NO\n";
      }

    }
    return 0;
}
