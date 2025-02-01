#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      int n;
      cin>>n;
      vector<ll> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
      ll mx = 0;
      for(int i=0;i<n-1;i++) mx = max(mx,a[i]);
      mx+=a[n-1];
      cout<<mx<<'\n';
    }
    return 0;
}
