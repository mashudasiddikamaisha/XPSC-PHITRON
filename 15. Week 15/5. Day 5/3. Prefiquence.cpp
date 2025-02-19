#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      string a,b;
      cin>>a>>b;
      int cnt=0, l=0, r=0;

      while(l<n && r<m)
      {
        if(a[l]==b[r])
        {
          cnt++;
          l++;
          r++;
        }
        else r++;

      }
      cout<<cnt<<'\n';
    }
    return 0;
}
