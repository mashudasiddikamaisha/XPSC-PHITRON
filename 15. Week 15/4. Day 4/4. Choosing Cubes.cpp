#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,f,k;
      cin>>n>>f>>k;
      f--, k--;
      vector<int> a(n+1);
      for(int i=0;i<n;i++) cin>>a[i];
      int x = a[f];
      sort(a.rbegin(), a.rend());
      if(a[k]<x) cout<<"YES\n";
      else if(a[k]>x) cout<<"NO\n";
      else
      {
        if(k==n-1 || a[k+1]<x) cout<<"YES\n";
        else cout<<"MAYBE\n";
      }
    }

    return 0;
}
