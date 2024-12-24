#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, sum=0;
      cin>>n;
      string s;
      cin>>s;
      for(auto c: "ABCD")
      {
        int cnt = count(s.begin(), s.end(), c);
        sum+= min(n,cnt);
      }
      cout<<sum<<'\n';
    }
    return 0;
}
