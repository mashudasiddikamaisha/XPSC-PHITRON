#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    vector<int> a(n), pre(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) pre[i] = pre[i-1]+a[i-1];
    cin>>k;
    while(k--)
    {
      int x;
      cin>>x;
      int ans = lower_bound(pre.begin(), pre.end(),x)-pre.begin();
      cout<<ans<<'\n';
    }

    return 0;
}
