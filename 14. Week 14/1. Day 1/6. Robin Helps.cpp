#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int ans=0, c=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          if(a[i]==0 && ans>0)
          {
            c++;
            ans--;
          }
          if(a[i]>=k) ans+=a[i];
        }
        cout<<c<<'\n';
    }

    return 0;
}
