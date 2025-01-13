#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    vector<int> a(n), ev, od;
    int x=0, y=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
      if(a[i]%2==0)
      {
        ev.push_back(a[i]);
      }
      else
      {
        od.push_back(a[i]);
      }
    }
    sort(ev.rbegin(),ev.rend());
    sort(od.rbegin(),od.rend());
    int k= min(od.size(), ev.size());
    for(int i=0;i<k;i++)
    {
      x+=ev[i];
      y+=od[i];
    }
    int p=sum, q=od.size(), r=ev.size();
    p-=x;
    p-=y;
    if(q>k) p-=od[k];
    if(r>k) p-=ev[k];
    cout<<p<<'\n';
    return 0;
}
