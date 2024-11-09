#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,q;
        cin>>n>>m>>q;
        vector<ll> tm(m);
        for(int i=0;i<m;i++)
        {
            cin>>tm[i];
        }
        sort(tm.begin(), tm.end());
        while(q--)
        {
            ll ans=INT_MAX, x;
            cin>>x;
            auto it= upper_bound(tm.begin(), tm.end(), x);
            if(it==tm.begin()) ans= tm[0]-1;
            else if(it==tm.end()) ans= n-tm[m-1];
            else
            {
                ll k= it-tm.begin();
                ans= (tm[k]-tm[k-1])/2;
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
