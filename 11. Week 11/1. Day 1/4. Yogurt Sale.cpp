#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, a,b;
      cin>>n>>a>>b;
      int x = n*a;
      if(b<2*a) x=(n/2)*b + (n%2)*a;
      cout<<x<<'\n';
    }
    return 0;
}
