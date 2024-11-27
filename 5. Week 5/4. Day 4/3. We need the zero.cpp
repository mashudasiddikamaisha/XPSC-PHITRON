#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans ^= a[i];
        }
        if(n%2==0)
        {
            if(ans==0) cout<<ans<<'\n';
            else cout<<-1<<'\n';
        }
        else cout<<ans<<'\n';
    }

    return 0;
}
