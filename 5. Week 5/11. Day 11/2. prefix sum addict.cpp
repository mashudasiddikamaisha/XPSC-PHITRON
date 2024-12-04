#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sorted(vector<ll> a, int i, int n)
{
  for(int j=i; j<n-1;j++)
  {
    if(a[j]>a[j+1]) return false;
  }
  return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n+1);
      for(int i=n-k+1;i<=n;i++) cin>>a[i];
      if(k==1) cout<<"YES\n";
      else
      {
        vector<ll> b(n+1);
        for(int i=n-k+2; i<=n;i++)
        {
          b[i]=a[i]-a[i-1];
        }
        if(!sorted(b, n-k+2, b.size())) cout<<"NO\n";
        else if(a[n-k+1]>b[n-k+2]*(n-k+1)) cout<<"NO\n";
        else cout<<"YES\n";
      }
    }
    return 0;
}
