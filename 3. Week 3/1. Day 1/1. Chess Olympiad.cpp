#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin >> x>>y>>z;
	double total= (x+y+z)*1.0;
	double a= x*1.0 + y*0.5;
	double b= y*0.5 + z*1.0;
	double p= 4.0-total;
	if(a+p>b) cout<<"YES\n";
	else cout<<"NO\n";

	}
