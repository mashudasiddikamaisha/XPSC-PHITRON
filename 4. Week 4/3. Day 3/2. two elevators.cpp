#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,c;
      cin>>a>>b>>c;
      int x = abs(a-1), y= abs(b-c) + abs(c-1);
      if(x<y) cout<<1<<'\n';
      else if(x>y) cout<<2<<'\n';
      else cout<<3<<'\n';

    }
    return 0;
}
