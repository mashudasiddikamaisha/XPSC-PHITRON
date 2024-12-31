#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, ans=1, cnt=1;
      cin>>n;
      while(true)
      {
        if(cnt>=n)
        {
          cout<<ans<<'\n';
          break;
        }
        ans++;
        cnt=cnt*2+2;
      }
    }
    return 0;
}
