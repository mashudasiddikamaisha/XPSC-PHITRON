#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      vector<int> a(k);
      for(int i=0;i<k;i++) cin>>a[i];
      sort(a.begin(), a.end());
      ll ans=0;
      for(int i=0;i<k-1;i++)
      {
        ans += (2*a[i])-1;
      }
      cout<<ans<<'\n';
    }
    return 0;
}
