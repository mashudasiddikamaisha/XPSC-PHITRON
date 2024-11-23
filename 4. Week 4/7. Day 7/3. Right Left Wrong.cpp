#include <bits/stdc++.h>
#define ll long long
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
      vector<ll> a(n), b(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(i==0) b[i]=a[i];
        else b[i] = a[i]+b[i-1];
        //cout<<b[i]<<" ";
      }
      //cout<<'\n';
      string s; cin>>s;
      int l=0, r=n-1;
      ll ans=0;
      while(l<r)
      {
        while(r>=0 && s[r]=='L') r--;
        while(l<n && s[l]=='R') l++;

        if(l<r)
        {
          if(l>0) ans+= b[r]-b[l-1];
          else ans+=b[r];
          l++;
          r--;
        }
      }
      cout<<ans<<'\n';
    }

    return 0;
}
