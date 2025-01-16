#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], cnt=1, ans=0;
    vector<int> v;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
      if(a[i]==a[i+1]) cnt++;
      else
      {
        v.push_back(cnt);
        cnt=1;
      }
    }
    v.push_back(cnt);
    int x=v.size();
    for(int i=0;i<x-1;i++)
    {
      int y=min(v[i],v[i+1]);
      ans =max(y,ans);
    }
    cout<<2*ans<<'\n';
    return 0;
}
