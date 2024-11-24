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
        for(int i=1;i<=n/2;i++)
        {
          if(i%2==0) cout<<"XX";
          else cout<<"YY";
        }
        cout<<'\n';
      }
      else cout<<"NO\n";
    }
    return 0;
}
