#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int x = n*(n-1) / 2;
      vector<ll> a(x);
      for(int i=0;i<x;i++) cin>>a[i];
      sort(a.begin(),a.end());
      for(int i=0;i<x;)
      {
        cout<<a[i]<<" ";
        if(n>0)
        {
          i+=n-1;
          n--;
        }
        else break;
      }
      cout<<a[x-1]<<'\n';
    }
    return 0;
}
