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
      if(n%2==0)
      {
        cout<<"YES\n";
        for(int i=0;i<n;i++)
        {
          if(i%2==0) cout<<1<<" ";
          else cout<<-1<<" ";
        }
        cout<<'\n';
      }
      else if(n%2!=0 && n>=5)
      {
        cout<<"YES\n";
        int x = -(n-2)/2, y = (n-1)/2;
        for(int i=0;i<n/2;i++)
        {
          cout<<x<<" "<<y<<" ";
        }
        cout<<x<<'\n';
      }
      else cout<<"NO\n";
    }
    return 0;
}
