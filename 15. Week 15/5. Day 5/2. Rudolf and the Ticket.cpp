#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m,k;
      cin>>n>>m>>k;
      int a[n], b[m];
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<m;i++) cin>>b[i];
      int cnt=0;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if((b[i]+a[j]) <=k) cnt++;
        }
      }
      cout<<cnt<<'\n';
    }
    return 0;
}
