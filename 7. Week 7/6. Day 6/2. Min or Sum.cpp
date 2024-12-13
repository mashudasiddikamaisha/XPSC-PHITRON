#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, ans=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        ans |= a[i];
      }
      cout<<ans<<'\n';
    }
    return 0;
}
