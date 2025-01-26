#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      sort(a, a+n);
      a[0]++;
      ll ans=1;
      for(int i=0;i<n;i++) ans*=a[i];

      cout<<ans<<'\n';
    }

    return 0;
}
