#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        a[i]--;
      }
      int flag=0;
      for(int i=0;i<n;i++)
      {
        if(a[i]%k!= i%k) flag++;
      }
      if(flag==0) cout<<0<<'\n';
      else if(flag==2) cout<<1<<'\n';
      else cout<<-1<<'\n';
    }
    return 0;
}
