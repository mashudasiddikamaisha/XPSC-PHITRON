#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int l=0, r=1, ans=0, pre=a[0];
    if(pre<=k) ans=1;
    while(r<n)
    {
      if(b[r-1]%b[r]==0) pre+=a[r];
      else
      {
        pre = a[r];
        l=r;
      }
      while(pre>k)
      {
        pre-=a[l];
        l++;
      }
      ans = max(ans, r-l+1);
      r++;
    }
    cout<<ans<<'\n';
  }
}
