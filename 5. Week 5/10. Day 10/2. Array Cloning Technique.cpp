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
       map<int,int> mp;
       int a[n];
       for(int i=0;i<n;i++)
       {
         cin>>a[i];
         mp[a[i]]++;
       }
       int ans=0, mx=0;
       for(auto [x,y]:mp)
       {
         mx = max(mx,y);
       }
       while(mx<n)
       {
         int x= min(mx, n-mx);
         ans+=(1+x);
         mx+=x;
       }
       cout<<ans<<'\n';
    }

    return 0;
}
