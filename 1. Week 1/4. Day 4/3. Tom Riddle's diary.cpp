#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string, bool> mp;
    while(t--)
    {
        string s;
        cin>>s;
        if(mp[s]==true) cout<<"YES\n";
        else cout<<"NO\n";
        mp[s]=true;
    }
    return 0;
}