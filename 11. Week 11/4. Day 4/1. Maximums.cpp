#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      a[i]+=sum;
      sum = max(sum, a[i]);
      cout<<a[i]<<" ";
    }
    return 0;
}
