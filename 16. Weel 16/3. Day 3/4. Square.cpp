#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--) {
        int n=4;
        int mx=INT_MIN, mn=INT_MAX;
        while(n--) {
            cin>>x>>y;
            mx = max(mx,x);
            mn= min(mn, x);
        }
        cout<<(mx-mn)*(mx-mn)<<endl;
    }
    return 0;
}
