#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=-1, y=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                x=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                y=i;
                break;
            }
        }
        int ans = y-x+1;
        cout<<ans<<'\n';

    }
    return 0;
}
