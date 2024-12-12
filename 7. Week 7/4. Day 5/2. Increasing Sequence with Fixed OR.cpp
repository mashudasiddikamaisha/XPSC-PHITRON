#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      deque<ll> dq;
      for(int i=0; i<=__lg(n); i++)
      {
        if((n >> i) & 1)
        {
          ll val = n - (1LL << i);
          if(val > 0) dq.push_front(val);
        }
      }
      dq.push_back(n);
      cout<<dq.size()<<'\n';
      for(auto v : dq)
      {
        cout<<v<<" ";
      }
      cout<<'\n';
    }

    return 0;
}
