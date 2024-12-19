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
	    int ans=INT_MAX;
	    for(int i=0; i<n;i++)
	    {
	        int x=0;
	        if(i+1<n) x = max(x, abs(a[i]-a[i+1]));
	        if(i-1>=0) x = max(x, abs(a[i]-a[i-1]));
	        ans = min(ans,x);
	    }
	    cout<<ans<<'\n';
	}

}
