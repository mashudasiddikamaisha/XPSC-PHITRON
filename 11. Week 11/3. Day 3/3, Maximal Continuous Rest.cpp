#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0, res=0;
    for(int i=0;i<2*n;i++)
    {
      if(a[i%n]==1)
      {
        cnt++;
        res=max(res,cnt);
      }
      else cnt=0;
    }
    cout<<res<<'\n';
    return 0;
}
