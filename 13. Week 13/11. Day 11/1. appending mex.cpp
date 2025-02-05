#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, m=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    bool flag = true;
    for(int i=0;i<n;i++)
    {
      if(a[i] > m+1)
      {
        cout<<i+1<<'\n';
        flag = false;
        break;
      }
      m = max(m, a[i]);
    }
    if(flag) cout<<-1<<'\n';
    return 0;
}
