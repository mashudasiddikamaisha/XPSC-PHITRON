#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n = s.size();
      if(s=="()") cout<<"NO\n";
      else
      {
        cout<<"YES\n";
        bool flag = false;
        string x="";
        for(int i=0;i<n-1;i++)
        {
          if((s[i]=='(' && s[i+1]=='(') || (s[i]==')' && s[i+1]==')'))
          {
            flag = true;
            break;
          }
        }
        if(flag)
        {
          for(int i=0;i<n;i++) x+="()";
        }
        else
        {
          for(int i=0;i<n;i++) x+='(';
          for(int i=0;i<n;i++) x+=')';
        }
        cout<<x<<'\n';
      }
    }
    return 0;
}
