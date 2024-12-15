#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll ans = 1, cnt = 0, a=1, b=0;
	    while(a*2<=n)
	    {
	        a*=2;
	        cnt++;
	    }
	    bool flag = false;
	    for(int i=cnt-1; i>=0;i--)
	    {
	        if(n&1<<i)
	        {
	            b |= (1<<i);
	            flag= true;
	        }
	        else
	        {
	            if(flag) ans*=2;
	        }
	    }
	    cout<<ans<<'\n';
	}

}
