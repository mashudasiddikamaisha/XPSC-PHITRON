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
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        sum+= abs(a[i]);
      }
      cout<<sum<<'\n';
    }
    return 0;
}
