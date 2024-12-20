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
      int a[n], b[n];
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];
      int diff= INT_MAX;
      bool flag=true;
      for(int i=0;i<n;i++)
      {
        if(b[i]!=0)
        {
          diff = min(diff, a[i]-b[i]);
        }
      }
      if(diff<0) flag = false;
      else if(diff!=INT_MAX)
      {
        for(int i=0;i<n;i++)
        {
          if(a[i]-b[i] > diff || (b[i]!=0 && a[i]-b[i]<diff))
          {
            flag = false;
            break;
          }
        }
      }
      if(flag) cout<<"YES\n";
      else cout<<"NO\n";
    }

    return 0;
}
