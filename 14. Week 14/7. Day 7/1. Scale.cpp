#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      int n,k;
      cin>>n>>k;
      char a[n][n];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          cin>>a[i][j];
        }
      }
      for(int i=0;i<n;i+=k)
      {
        for(int j=0;j<n;j+=k)
        {
          cout<<a[i][j];
        }
        cout<<'\n';
      }
    }
    return 0;
}
