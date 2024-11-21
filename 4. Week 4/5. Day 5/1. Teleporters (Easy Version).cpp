#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll> a(n+1), b;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b.push_back(a[i]+i);
        }
        sort(b.begin(), b.end());
        ll sum=0, cnt=0;
        for(auto val:b)
        {
            sum+=val;
            if(sum<=c) cnt++;
            else break;
        }
        cout<<cnt<<'\n';

    }
}
