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
        set<char> st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        vector<char> v;
        for(auto i=st.begin();i!=st.end();i++)
        {
            v.push_back(*i);
        }
        map<char,char> mp;

        for(int i=0;i<v.size();i++)
        {
            mp[v[i]] = v[v.size()-1-i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<mp[s[i]];
        }
        cout<<'\n';

    }
    return 0;
}
