
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
      int n;
      cin>>n;
      string s, ans="";
      cin>>s;
      for(int i=n-1;i>=0;i--)
      {
        if(s[i]!='0') ans+= (s[i]-'1')+'a';
        else
        {
          int x = (s[i-2] - '0')*10 + (s[i-1]-'0');
          ans+=(x-1)+'a';
          i-=2;
        }
      }
      reverse(ans.begin(), ans.end());
      cout<<ans<<'\n';
    }
    return 0;
}
