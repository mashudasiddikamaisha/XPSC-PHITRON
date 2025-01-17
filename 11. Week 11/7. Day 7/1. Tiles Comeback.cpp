#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k, cnt=0;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      if(a[0]==a[n-1])
      {
        for(int i=0;i<n;i++)
        {
          if(a[i]==a[0]) cnt++;
          if(cnt==k) break;
        }
        if(cnt==k) cout<<"YES\n";
        else cout<<"NO\n";
      }
      else
      {
        int ind=n;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
          if(a[i]==a[0]) cnt++;
          if(cnt==k)
          {
            ind = i;
            cnt=0;
            break;
          }
        }
        for(int i=ind+1; i<n;i++)
        {
          if(a[i]==a[n-1]) cnt++;
          if(cnt==k)
          {
            flag=true;
            break;
          }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
      }
    }
    return 0;
}
