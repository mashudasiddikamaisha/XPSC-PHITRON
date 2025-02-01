#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      string a,b;
      cin>>a>>b;
      int n=a.size(), m=b.size(), ans=0;
      for(int i=1;i<=min(n,m);i++)
      {
        for(int j=0;j+i<=n;j++)
        {
          for(int k=0;k+i<=m;k++)
          {
            if(a.substr(j,i)==b.substr(k,i)) ans = max(ans, i);
          }
        }
      }
      cout<<a.size()+b.size()-2*ans<<'\n';
    }
    return 0;
}
