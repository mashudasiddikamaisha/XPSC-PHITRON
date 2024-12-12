#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m+1;i++) cin>>a[i];
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        int s=0;
        for(int j=0;j<n;j++)
        if(((a[i]>>j)&1)!=((a[m]>>j)&1)) s++;
        if(s<=k) cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}
