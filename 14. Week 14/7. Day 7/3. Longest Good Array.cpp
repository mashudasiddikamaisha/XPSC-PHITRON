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
      r-=l;
      ll a=2, b = 10e9;
      while(a<b)
      {
        ll x = (a+b)/2;
        if(x*(x-1)/2 <= r) a = x+1;
        else b = x;
      }
      cout<<a-1<<'\n';

    }
    return 0;
}
