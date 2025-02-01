#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      int n;
      cin>>n;
      for(int i=0;i<2*n;i++)
      {
        for(int j=0;j<2*n;j++)
        {
          int a = i/2 + j/2;
          if(a%2==0) cout<<"#";
          else cout<<".";
        }
        cout<<"\n";

      }

    }
    return 0;
}
