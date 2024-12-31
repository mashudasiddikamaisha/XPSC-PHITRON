#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    while(k--)
    {
      int x;
      cin>>x;
      int l=1, r=n, mid, ans = 0;
      while(l<=r)
      {
        mid = (l+r)/2;
        if(x>=a[mid])
        {
          ans = mid;
          l = mid+1;
        }
        else r = mid-1;
      }
      cout << ans << endl;

    }
    return 0;
}
