#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n), y(n), a,b;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            y[i]=x[i];
            mp[x[i]]=i;
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') a.push_back(x[i]);
            else b.push_back(x[i]);
        }
        sort(x.rbegin(),x.rend());
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        int i;
        for( i=0;i<b.size();i++)
        {
                y[mp[b[i]]] = x[i];
        }
        for(int j=0;j<a.size();j++)
        {
            y[mp[a[j]]] = x[i];
            i++;
        }
        for(int k=0;k<n;k++) cout<<y[k]<<" ";
        cout<<'\n';

    }
    return 0;
}
