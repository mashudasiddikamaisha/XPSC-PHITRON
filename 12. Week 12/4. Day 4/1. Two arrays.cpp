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
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        cin>>b[i];
      }
      sort(a,a+n);
      sort(b,b+n);
      bool flag = true;
      for(int i=0;i<n;i++)
      {
        if(a[i]>b[i] || b[i]-a[i]>1)
        {
          flag = false;
          break;
        }
      }
      if(flag) cout<<"YES\n";
      else cout<<"NO\n";
    }

    return 0;
}
