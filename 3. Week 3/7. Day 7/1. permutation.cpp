#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n-1];
        map<int, int> mp1, mp2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            mp1[a[i][n-2]]=i;
            mp2[a[i][n-2]]++;
        }
        int val, in=0;
        for(auto [x,y]:mp2)
        {
            if(y==1) in=x;
            else val=x;
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<a[mp1[in]][i]<<" ";
        }
        cout<<val<<'\n';
    }
    return 0;
}
