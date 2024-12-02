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
      ll a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      ll ans = INT_MIN;
      vector<int> v;
      for(int i=0;i<n;i++)
      {
        if(a[i]%2==0) v.push_back(a[i]);
        else if(a[i]>ans) ans = a[i];
      }
      sort(v.begin(), v.end());
      if(ans==INT_MIN || v.size()==0)
      {
        cout<<0<<'\n';
      }
      else
      {
        int x = v.size();
        for(int i =0; i<v.size();i++)
        {
          if(v[i]<ans) ans+=v[i];
          else
          {
            x++;
            break;
          }
        }
        cout<<x<<'\n';
      }
    }
    return 0;
}
