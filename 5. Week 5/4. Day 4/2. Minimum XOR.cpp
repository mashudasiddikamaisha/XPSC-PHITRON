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
      int n, Xor = 0;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
        Xor^= v[i];
      }
      int ans = Xor;
      for(int i=0; i<n; i++)
      {
        int curr = (Xor^v[i]);
        ans = min(ans, curr);
      }
      cout<<ans<<'\n';
    }
    return 0;
}
