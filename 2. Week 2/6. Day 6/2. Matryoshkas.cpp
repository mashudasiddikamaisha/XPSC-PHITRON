#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            if(mp[a[i]]>0)
            {
                cnt++;
                while(mp[x]>0)
                {
                    mp[x]--;
                    x++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
