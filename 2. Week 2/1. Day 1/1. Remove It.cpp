#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  long long x;
  cin>>n>>x;
  long long a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==x) a[i]=-1;
  }
  for(int i=0;i<n;i++)
  {
    if(a[i]!=-1) cout<<a[i]<<" ";
  }

}
