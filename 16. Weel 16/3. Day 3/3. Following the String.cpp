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
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int b[26]={0};
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<26;j++)
        {
          if(a[i]==b[j])
          {
            char c = 'a'+j;
            cout<<c;
            b[j]++;
            break;
          }
        }
      }
      cout<<"\n";
    }
    return 0;
}
