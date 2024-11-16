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
      ll a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum+=abs(a[i]);
      }
      ll r=0, cnt=0;
      while(r<n)
      {
        if(a[r]<0)
        {
          cnt++;
          while(r<n && a[r]<=0)
           r++;
        }
        else
        {
          r++;
        }
      }
      cout<<sum<<" "<<cnt<<'\n';
    }
    return 0;
}
