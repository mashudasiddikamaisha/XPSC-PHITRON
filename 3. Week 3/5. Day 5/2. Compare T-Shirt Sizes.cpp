#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string a,b;
      cin>>a>>b;
      char x= a.back(), y=b.back();
      if(x>y) cout<<"<\n";
      else if(x<y) cout<<">\n";
      else
      {
        if(x=='S')
        {
          if(a==b) cout<<"=\n";
          else if(a>b) cout<<"<\n";
          else cout<<">\n";
        }
        else if(x=='L')
        {
          if(a==b) cout<<"=\n";
          else if(a>b) cout<<">\n";
          else cout<<"<\n";
        }
        else
        {
          cout<<"=\n";
        }
      }
    }

    return 0;
}
