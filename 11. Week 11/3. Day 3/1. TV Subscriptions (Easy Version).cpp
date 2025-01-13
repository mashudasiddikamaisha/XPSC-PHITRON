#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k,d;
      cin>>n>>k>>d;
      vector<int> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
      int sub=k;
      for(int i=0;i<=n-d;i++)
      {
        set<int> s;
        for(int j=i;j<i+d;j++) s.insert(a[j]);
        int x=s.size();
        sub = min(sub,x);
      }
      cout<<sub<<'\n';
    }
    return 0;
}
