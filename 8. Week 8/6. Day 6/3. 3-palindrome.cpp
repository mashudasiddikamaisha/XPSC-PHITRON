#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string s;
  for(int i=0;i<n;i++)
  {
    s+='a';
  }
  for(int i=2;i<n;i+=4)
  {
    s[i]='b';
    if(i+1<n) s[i+1]='b';
  }
  cout<<s;
  return 0;
}
