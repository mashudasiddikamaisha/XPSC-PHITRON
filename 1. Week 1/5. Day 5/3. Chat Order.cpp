#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    vector<string> v;
    map<string, bool> mp;
    for(long long i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(long long i=v.size()-1;i>=0;i--)
    {
        if(mp[v[i]]!=true) cout<<v[i]<<'\n';
        mp[v[i]]=true;
    }
   return 0;
}
