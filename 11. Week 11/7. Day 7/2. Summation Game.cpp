#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k, x,ans=INT_MIN;
      cin>>n>>k>>x;
      vector<int> a(n+1), pre(n+1);
      for(int i=1;i<=n;i++) cin>>a[i];
      sort(a.begin(),a.end());
      pre[1] = a[1];
      for(int i=2; i<=n;i++)
      {
        pre[i]=pre[i-1]+a[i];
      }
      for(int i=n;i>=0;i--)
      {
        int ind=n-i;
        if(ind>k) break;
        int b = min(i,x);
        int sum = pre[i-b]-(pre[i]-pre[i-b]);
        ans = max(ans,sum);
      }
      cout<<ans<<'\n';
    }
    return 0;
}
