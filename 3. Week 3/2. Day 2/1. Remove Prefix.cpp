h#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(mp[a[i]]==0) cnt++;
            else break;
            mp[a[i]]++;
        }
        cout<<n-cnt<<'\n';
    }
    return 0;
}
