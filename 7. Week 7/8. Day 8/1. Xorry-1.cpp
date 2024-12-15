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
	    ll x = __lg(n);
	    ll a = (1 << x);
	    ll b = (n^a);
	    cout<<b<<" "<<a<<'\n';
	}

}
