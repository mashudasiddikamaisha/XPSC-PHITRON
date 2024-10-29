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
        int x = -1, y = -1;
        x =s.find('B');
        y = s.rfind('B');
        int ans = y - x +1;
        cout<<ans<<'\n';

    }
    return 0;
}
