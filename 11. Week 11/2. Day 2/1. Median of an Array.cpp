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
      vector<int> a(n);
      for(int i=0;i<n;i++) cin>>a[i];
      sort(a.begin(),a.end());
      int ind= (n-1)/2;
      int med=a[ind], cnt=0;
      for(int i=ind;i<n;i++)
      {
        if(a[i]<=med)
        {
          cnt+= med+1-a[i];
          a[i]=med+1;
        }
      }
      cout<<cnt<<'\n';
    }
    return 0;
}
