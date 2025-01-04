#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,l,r;
      cin>>n>>l>>r;
      vector<int> a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a.begin(), a.end());
      ll cnt=0;
      for(int i=0;i<n-1;i++)
      {
        int low=lower_bound(a.begin() + i+1, a.end(), l-a[i])-a.begin();
        int upp = upper_bound(a.begin()+i+1, a.end(), r-a[i])-a.begin();
        cnt += (upp-low);
      }
      cout<<cnt<<'\n';
    }
    return 0;
}
