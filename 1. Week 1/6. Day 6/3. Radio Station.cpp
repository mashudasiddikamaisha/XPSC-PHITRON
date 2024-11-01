#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string, string> mp;
    while(n--)
    {
        string nm, ip;
        cin>>nm>>ip;
        mp[ip] = nm;
    }

    while(m--)
    {
        string cmnd, ip2;
        cin>>cmnd>>ip2;
        ip2.pop_back();
        cout<<cmnd<<" "<<ip2<<"; #"<<mp[ip2]<<'\n';
    }
    return 0;
}
