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
      int n,k;
      cin>>n>>k;
      vector<int> a(n), pre(n+1);
      for(int i=0;i<n;i++) cin>>a[i];
      sort(a.rbegin(), a.rend());
      for(int i=1;i<=n;i++)
      {
        pre[i] = a[i-1] + pre[i-1];
      }
      while(k--)
      {
        int x, ans=-1;
        cin>>x;
        auto it = lower_bound(pre.begin(), pre.end(), x);
        if(it!=pre.end()) ans = it - pre.begin();
        cout<<ans<<'\n';
      }
    }
    return 0;
}
