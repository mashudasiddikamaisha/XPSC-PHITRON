#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
      int n,s;
      cin>>n>>s;
      deque<int> a(n);
      ll sum=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum+=a[i];
      }
      if(sum<s)
      {
        cout<<-1<<'\n';
        continue;
      }
      if(sum==s)
      {
        cout<<0<<'\n';
        continue;
      }
      int b[n]={n}, back=n;
      for(int i=n-1;i>=0;i--)
      {
        b[i]=back;
        if(a[i]==1) back=i;
      }
      int l=0,r=0, ans=INT_MAX, sums=0;
      while(r<n)
      {
        sums+=a[r];
        while(sums>s)
        {
          sums-=a[l];
          l++;
        }
        if(sums==s) ans = min(ans,l+n-b[r]);
        r++;
      }
      cout<<ans<<'\n';
    }

    return 0;
}
