#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
      ll ans=0, cnt=0;
      while(cnt<n && a[cnt]==0) cnt++;
      for(int i=cnt;i<n-1;i++)
      {
        ans+=a[i];
        if(a[i]==0) ans++;
      }
      cout<<ans<<'\n';
    }
}
