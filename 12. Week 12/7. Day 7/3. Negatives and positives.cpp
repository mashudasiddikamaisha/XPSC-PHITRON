#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<ll> a(n);
      ll sum=0, cnt=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]<0)
        {
          cnt++;
          a[i]= -a[i];
        }
        sum+=a[i];
      }
      sort(a.begin(),a.end());
      if(cnt%2!=0) sum-= 2*a[0];
      cout<<sum<<"\n";
    }
    return 0;
}
