#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int x = n*n, y=1;
      int a[n][n];
      for(int i=0;i<n;i++)
      {
        if(i%2==0)
        {
          for(int j=0; j<n; j++)
          {
            if((i+j)%2==0)
            {
              a[i][j] = y;
              y++;
            }
            else
            {
              a[i][j]=x;
              x--;
            }
          }
        }
        else
        {
          for(int j=n-1; j>=0; j--)
          {
            if((i+j)%2==0)
            {
              a[i][j] = y;
              y++;
            }
            else
            {
              a[i][j]=x;
              x--;
            }
          }
        }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0; j<n; j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<'\n';
      }
    }
    return 0;
}
