#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ans=0;
        if(n%2==0)
        {
            ans=k/2;
        }
        else
        {
            ans= ceil(1.0 * k/2);
        }

        if(ans%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main()
{

    solve();
    return 0;
}
