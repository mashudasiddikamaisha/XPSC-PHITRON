#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1), b(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    set<int> s;
    for(int i=n;i>0; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    for(int i=1;i<=m;i++)
    {
        int pos; cin>>pos;
        cout<<b[pos]<<"\n";
    }
    return 0;
}
