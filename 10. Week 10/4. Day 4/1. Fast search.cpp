#include <bits/stdc++.h>
using namespace std;

int Left(vector<int> &a, int l, int n)
{
  int x=0, y=n-1, ans = -1, mid;
  while(x<=y)
  {
    mid = (x+y)/2;
    if(a[mid]<=l)
    {
      ans=mid;
      x=mid+1;
    }
    else y=mid-1;
    }
    return ans;

}

int Right(vector<int> &a, int r, int n)
{
  int x=0, y=n-1, ans = n, mid;
  while(x<=y)
  {
    mid = (x+y)/2;
    if(a[mid]>=r)
    {
      ans=mid;
      y=mid-1;

    }
    else x=mid+1;
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    cin>>k;
    while(k--)
    {
      int l,r;
      cin>>l>>r;
      int left= Right(a,l, n), right = Left(a,r,n);
      if(a[left]>=l && a[right]<=r) cout<<(right-left+1)<<" ";
      else cout<<0<<" ";
    }

    return 0;
}
