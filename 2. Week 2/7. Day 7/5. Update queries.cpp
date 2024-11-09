#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        set<int> ind;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            ind.insert(x-1);
        }
        string c;
        cin>>c;
        sort(c.begin(), c.end());
        int i=0;
        for(auto it = ind.begin(); it!=ind.end();it++)
        {
            s[*it] = c[i];
            i++;
        }
        cout<<s<<'\n';
    }
    return 0;
}
