#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll a,b,n;
      cin>>a>>b>>n;
      ll x[n], ans=b;;
      for(int i=0;i<n;i++)
      {
        cin>>x[i];
        ans+= min(x[i], a-1);
      }
      cout<<ans<<'\n';
    }
    return 0;
}
