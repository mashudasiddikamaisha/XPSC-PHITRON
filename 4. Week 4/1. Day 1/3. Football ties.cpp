#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int z = min(x,y)%3;
        cout<<z<<'\n';

    }
}
