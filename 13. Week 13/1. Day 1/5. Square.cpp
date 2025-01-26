#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
      int a1, b1, a2, b2;
      cin>>a1>>b1>>a2>>b2;
      int x = max(a1, b1), y = min(a1, b1), p = max(a2, b2), q = min(a2, b2);

      if(x==p && y+q==x) cout<<"YES\n";
      else cout<<"NO\n";

    }

    return 0;
}
