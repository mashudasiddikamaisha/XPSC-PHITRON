#include <bits/stdc++.h>
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
      string a = s;
      reverse(a.begin(), a.end());
      if(a+s < s) cout<<a+s<<'\n';
      else cout<<s<<'\n';
    }
    return 0;
}
