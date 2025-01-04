#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int l=0,r=0,cnt=0, sum=0;
    while(r<n)
    {
      if(sum<x)
      {
        if(l>=n) break;
        sum+=a[l];
        l++;
      }
      else if(sum>x)
      {
        sum-=a[r];
        r++;
      }
      else
      {
        sum-=a[r];
        r++;
        sum+=a[l];
        l++;
      }
      if(sum==x) cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}
