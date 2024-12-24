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
      if(s[0]=='s') s[0]='.';
      if(s[n-1]=='p') s[n-1]='.';
      bool flag1= false, flag2 = false;
      for(auto c:s)
      {
        if(c=='p') flag1=true;
        else if(c=='s') flag2 = true;
      }
      if(flag1 && flag2) cout<<"NO"<<'\n';
      else cout<<"YES"<<'\n';
    }
    return 0;
}
