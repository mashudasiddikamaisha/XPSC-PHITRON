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
      int a[n];
      map<int,int> mp;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        mp[a[i]]++;
      }
      if(n<3) cout<<0<<'\n';
      else
      {
        int cnt=0;
        for(auto [x,y]:mp)
        {
          cnt+= y/3;
        }
        cout<<cnt<<'\n';
      }
    }
    return 0;
}
