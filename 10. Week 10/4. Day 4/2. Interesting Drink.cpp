#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    vector<int> a(n), pre(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());

    cin>>k;
    while(k--)
    {
      long long x,ans;
      cin>>x;
      ans = upper_bound(a.begin(),a.end(),x)-a.begin();
      cout<<ans<<'\n';
    }

    return 0;
}
