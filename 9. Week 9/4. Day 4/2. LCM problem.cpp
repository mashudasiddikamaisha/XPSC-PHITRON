#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll l,r;
      cin>>l>>r;
      ll x=l, y=2*l;
      if(y>r) cout<<-1<<" "<<-1<<'\n';
      else cout << x<<" " <<y <<'\n';
    }
    return 0;
}
