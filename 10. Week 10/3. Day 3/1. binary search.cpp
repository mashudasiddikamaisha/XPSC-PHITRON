#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    while(k--)
    {
      int x;
      cin>>x;
      int l=0, r=n-1, mid;
      bool flag = false;
      while(l<=r)
      {
        mid = (l+r)/2;
        if(x==a[mid])
        {
          flag = true;
          break;
        }
        else if(x>a[mid]) l = mid+1;
        else r = mid-1;
      }
      if(flag) cout<<"YES\n";
      else cout<<"NO\n";

    }
    return 0;
}
