#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int c=0;
      for(int i=0;i<n;i++)
      {
        if(c%2==0)
        {
          if(s[i]=='1' && s[i+1]=='0') c++;
        }
        else
        {
          if(s[i]=='0' && s[i+1]=='1') c++;
        }

      }
      if(c%2!=0)
      {
        if(s[n-1]=='1') c++;
      }
      else if(c!=0)
      {
        if(s[n-1]=='0') c++;
      }
      cout<<c<<'\n';

    }
    return 0;
}
