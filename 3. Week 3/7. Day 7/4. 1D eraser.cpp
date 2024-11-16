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
      int r=0, b=0, ans=INT_MAX;
      while(r<n)
      {
        if(s[r]=='B')
        {
          b++;
          r+=k;
        }
        else r++;
      }
      cout<<b<<'\n';
    }
    return 0;
}
