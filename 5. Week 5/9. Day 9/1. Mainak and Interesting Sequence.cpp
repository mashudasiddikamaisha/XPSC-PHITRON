#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll m,n;
      cin>>n>>m;
      if(n>m || (n%2==0 && m%2==1)) cout<<"NO\n";
      else
      {
        cout<<"YES\n";
        if(n%2==1)
        {
          for(int i=1;i<n;i++) cout<<1<<" ";
          cout<<m-n+1<<'\n';
        }
        else
        {
          for(int i=2;i<n;i++) cout<<1<<" ";
          ll x = (m-n+2)/2;
          cout<<x<<" "<<x<<'\n';
        }

      }
    }
    return 0;
}
