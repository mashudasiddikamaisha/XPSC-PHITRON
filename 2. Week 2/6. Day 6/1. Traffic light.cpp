#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n>>c;
        string s;
        cin>>s;
        s+=s;
        int mx= INT_MIN, idx=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='g') idx = i;
            if(s[i]==c) mx = max(mx, idx-i);
        }
        cout<<mx<<'\n';
    }
    return 0;
}
