#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n], sum=0;
      bool flag = false;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]%3==1) flag = true;
        sum+= a[i];
      }
      if(sum%3==0) cout<<0<<'\n';
      else if(sum%3==2) cout<<1<<'\n';
      else {
        if(flag) cout<<1<<'\n';
        else cout<<2<<'\n';
      }
    }
    return 0;
}
