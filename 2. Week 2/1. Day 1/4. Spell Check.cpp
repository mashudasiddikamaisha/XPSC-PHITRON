#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      string s1, s2;
      cin>>s1;
      if(n!=5)
      {
          cout<<"NO\n";
          continue;
      }
      s2="Timur";
      sort(s1.begin(),s1.end());
      sort(s2.begin(), s2.end());
      if(s1==s2) cout<<"YES\n";
      else cout<<"No\n";
  }

}
