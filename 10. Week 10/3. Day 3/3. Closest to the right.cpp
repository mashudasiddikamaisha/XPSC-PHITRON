#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    while(k--)
    {
      int x, l=0, r=n-1, mid, ans = n;;
      cin>>x;
      while(l<=r)
      {
        mid = (l+r)/2;
        if(x<=a[mid])
        {
          ans = mid;
          r = mid-1;
        }
        else l = mid+1;
      }
      cout << ans+1 << '\n';

    }
    return 0;
}
