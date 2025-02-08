#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int ans=0,mn;
        for(int i=0;i<n;i++)
        {
            mn=0;
            for(int j=0;j<n-i;j++)
            {
                mn = min(mn, a[i+j][j]);
            }
            ans+=mn;
        }
        for(int i=1;i<n;i++)
        {
            mn=0;
            for(int j=0;j<n-i;j++)
            {
                mn = min(mn, a[j][i+j]);
            }
            ans+=mn;
        }
        cout<<abs(ans)<<"\n";
    }

    return 0;
}
