#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      deque<int> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
      sort(a.begin(),a.end());
      while(a.size()>1)
      {
          a.pop_front();
          a.pop_back();
      }
      cout<<a[0]<<'\n';
    }
    return 0;
}
