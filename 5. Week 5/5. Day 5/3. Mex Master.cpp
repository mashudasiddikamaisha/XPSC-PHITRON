#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n, sum=0;
      cin>>n;
      bool flag = false;
      for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        if(a==0) sum++;
        else if(a>=2) flag = true;
      }
      if(sum <= (n+1)/2) cout<<0<<'\n';
      else if(flag || sum==n) cout<<1<<'\n';
      else cout<<2<<'\n';
    }
    return 0;
}
