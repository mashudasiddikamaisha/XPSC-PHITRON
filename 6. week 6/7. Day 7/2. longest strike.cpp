#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, k;
      cin>>n>>k;
      vector<int> a(n);
      map<int,int> mp;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        mp[a[i]]++;
      }
      vector<int> ans;
      for(auto [x,y]:mp)
      {
        if(y>=k) ans.push_back(x);
      }
      if(ans.size()==0) cout<<-1<<'\n';
      else
      {
        sort(ans.begin(), ans.end());
        int x=0, left = ans[0], right = ans[0], l=ans[0];
        for(int i=0;i<ans.size()-1;i++)
        {
          if(ans[i+1]-1== ans[i])
          {
            if(ans[i+1] - l > x)
            {
              x= ans[i+1] - l;
              left= l;
              right= ans[i+1];

            }
          }
          else
            {
              l = ans[i+1];
            }
        }
        cout<<left<<" "<<right<<'\n';
      }
    }
    return 0;
}
