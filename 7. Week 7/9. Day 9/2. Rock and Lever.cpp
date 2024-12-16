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
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      ll ans=0;
      for(int i=29;i>=0;i--)
      {
        ll cnt=0;
        for(int j=0;j<n;j++)
        {
          if(a[j]>=(1<<i) && a[j] < (1<<i+1)) cnt++;
        }
        ans+= cnt*(cnt-1)/2;
      }
      cout<<ans<<'\n';
    }
    return 0;
}
