#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>q;
    while(q--)
    {
      int k;
      cin>>k;
      auto it1 = lower_bound(a.begin(), a.end(),k), it2=upper_bound(a.begin(),a.end(), k);
      if(it1!= a.begin()) cout<<*(it1-1)<<" ";
      else cout<<"X ";
      if(it2!=a.end()) cout<<*it2<<"\n";
      else cout<<"X\n";
    }
    return 0;
}
