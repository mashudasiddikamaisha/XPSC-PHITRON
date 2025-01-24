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
      int a[n], b[n], sum=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum+=a[i];
      }
      sort(a,a+n);
      if(sum==0) cout<<"NO\n";
      else
      {
        cout<<"YES\n";
        int x = 0;
        for(int i=0;i<n;i++)
        {
            x+=a[i];
            if(x==0) swap(a[i], a[n-1]);
        }
        bool flag = true;
        x=0;
        for(int i=0;i<n;i++)
        {
            x+=a[i];
            if(x==0) flag = false;
        }
        if(flag)
        {
          for(int i=0;i<n;i++)
          {
            cout<<a[i]<<" ";
          }
          cout<<'\n';
        }
        else
        {
          sort(a, a+n, greater<int>());
          x=0;
          for(int i=0;i<n;i++)
          {
            x+=a[i];
            if(x==0) swap(a[i], a[n-1]);
          }
          for(int i=0;i<n;i++)
          {
            cout<<a[i]<<" ";
          }
        }

      }
    }

    return 0;
}
