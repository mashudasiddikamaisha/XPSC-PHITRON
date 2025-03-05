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
      vector<string> a(n);
      bool flag = false;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        int c=0;
        for(int j=0;j<n;j++)
        {
          if(a[i][j]=='1') c++;
        }
        if(c==1) flag = true;
        else if(c>1) break;
      }
      reverse(a.begin(), a.end());
      for(int i=0;i<n;i++)
      {
        int c=0;
        for(int j=0;j<n;j++)
        {
          if(a[i][j]=='1') c++;
        }
        if(c==1) flag = true;
        else if(c>1) break;
      }
      if(flag) cout << "TRIANGLE\n";
      else cout<<"SQUARE\n";
    }
    return 0;
}
