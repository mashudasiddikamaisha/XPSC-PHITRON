#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      int n;
      cin>>n;
      int a[n];
      map<int, int> mp;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        mp[a[i]]++;
      }
      int i=0,j=0;
      bool flag = false;
      while(true)
      {
        if(mp[i]==0) break;
        if(mp[i]>=2 && flag==false) j++;
        if(mp[i]==1) flag = true;
        i++;
      }
      cout<<i+j<<'\n';

    }
    return 0;
}
