#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x=1;
    while(true)
    {
      int n,q;
      cin>>n>>q;
      if(n==0 && q==0) break;
      vector<int> a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a.begin(), a.end());
      cout<<"CASE# "<<x<<":\n";
      x++;
      while(q--)
      {
        int k;
        cin>>k;
        auto it = lower_bound(a.begin(), a.end(),k);
        if(it!= a.end() && *it==k) cout<<k<<" found at "<<(it-a.begin()+1)<<'\n';
        else cout<<k<<" not found\n";
      }
    }
    return 0;
}
