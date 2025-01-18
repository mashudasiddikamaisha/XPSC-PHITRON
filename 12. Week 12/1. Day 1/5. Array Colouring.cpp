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
      vector<ll> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
      ll sum1=0, sum2=0;
      for(int i=0;i<n;i++)
      {
        if(a[i]%2==0) sum1+=a[i];
        else sum2+=a[i];
      }
      if((sum1%2==0 && sum2%2==0) || (sum1%2!=0 && sum2%2!=0)) cout<<"YES\n";
      else cout<<"NO\n";
    }
    return 0;
}
