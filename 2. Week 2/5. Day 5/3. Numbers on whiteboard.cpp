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
        multiset<int> a;
        for(int i=1;i<=n;i++)
        {
            a.insert(i);
        }
        cout<<2<<'\n';
        while(a.size()>1)
        {
            int p = *a.rbegin();
            a.erase(--a.end());
            int q = *a.rbegin();
            a.erase(--a.end());
            cout<<p<<" "<<q<<'\n';
            int x = ((p+q+1)/2);
            a.insert(x);
        }

    }

    return 0;
}
