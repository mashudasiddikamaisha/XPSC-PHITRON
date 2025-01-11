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
      bool flag=false;
      for(int i=0;i<n-2;i++)
      {
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
        {
          flag=true;
          break;
        }
      }
      if(flag) cout<<2<<'\n';
      else
      {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
          if(s[i]=='.') cnt++;
        }
        cout<<cnt<<'\n';
      }
    }
    return 0;
}
