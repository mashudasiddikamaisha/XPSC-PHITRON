#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int x= a[n-2]-a[1], y=a[n-1]-a[2], z=a[n-3]-a[0];
        int ans= min({x,y,z});
        cout<<ans<<'\n';
    }
}
