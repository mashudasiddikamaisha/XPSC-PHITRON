#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[205][205];

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>a[i][j];
      }
    }
    ll mx=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        ll x = a[i][j];
        int ci= i-1, cj=j-1;
        while(valid(ci,cj))
        {
          x+=a[ci][cj];
          ci--, cj--;
        }
        ci= i+1, cj=j+1;
        while(valid(ci,cj))
        {
          x+=a[ci][cj];
          ci++, cj++;
        }
        ci = i-1, cj=j+1;
        while(valid(ci,cj))
        {
          x+=a[ci][cj];
          ci--, cj++;
        }
        ci = i+1, cj=j-1;
        while(valid(ci,cj))
        {
          x+=a[ci][cj];
          ci++, cj--;
        }
        mx = max(x, mx);
      }
    }
    cout<<mx<<'\n';
  }
  return 0;
}
