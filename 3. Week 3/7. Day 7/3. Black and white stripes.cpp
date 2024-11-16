#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int l=0, r=0, w=0, ans=INT_MAX;
      while(r<n)
      {
        if(s[r]=='W') w++;
        if(r-l+1==k)
        {
          ans = min(ans,w);
          if(s[l]=='W') w--;
          l++;
        }
        r++;
      }
      cout<<ans<<'\n';
    }
    return 0;
}
