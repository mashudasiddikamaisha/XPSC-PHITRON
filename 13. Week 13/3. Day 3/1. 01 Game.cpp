#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int z=0, o=0;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='0') z++;
        else o++;
      }
      int x= min(z,o);
      if(x%2==0) cout<<"NET\n";
      else cout<<"DA\n";
      }
    return 0;
}
