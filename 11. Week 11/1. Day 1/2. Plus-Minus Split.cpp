#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, cnt=0;
      cin>>n;
      string s;
      cin>>s;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='+') cnt++;
        else cnt--;
      }
      cout<<abs(cnt)<<'\n';
    }
    return 0;
}
