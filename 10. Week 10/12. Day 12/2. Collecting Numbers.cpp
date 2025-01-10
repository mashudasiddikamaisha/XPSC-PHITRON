#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll> a(n), b(n+1);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      b[a[i]] = i;
    }
    ll cnt = 1;
    for(int i=1;i<n;i++)
    {
      if(b[i]>b[i+1])
      {
        cnt++;
      }
    }
    cout<<cnt;
    return 0;
}
