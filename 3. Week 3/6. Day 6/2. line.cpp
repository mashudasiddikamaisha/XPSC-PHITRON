#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      vector<ll> left(n), right(n);
      for(int i=0;i<n;i++)
      {
        if(i==0)
        {
          left[i]=0;
        }
        else left[i] = left[i-1]+1;
      }
      for(int i=n-1; i>=0;i--)
      {
        if(i==n-1) right[i] = 0;
        else right[i] = right[i+1]+1;
      }
      ll val = 0;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='L')
        {
          val+=left[i];
        }
        else val+=right[i];
      }
      vector<ll> ans;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='L')
        {
          if(right[i]>left[i]) ans.push_back(right[i]-left[i]);
          else ans.push_back(0);
        }
        else
        {
          if(right[i]<left[i]) ans.push_back(left[i]-right[i]);
          else ans.push_back(0);
        }
      }
      sort(ans.rbegin(), ans.rend());
      for(int i=0;i<n;i++)
      {
        if(ans[i]>0)
        {
          val+=ans[i];
          cout<<val<<" ";
        }
        else cout<<val<<" ";
      }
      cout<<'\n';
    }

    return 0;
}
