#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    long long int x=0;
    long long mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        x+=a[i];
        if(a[i]%2!=0) mn = min(mn,a[i]);
    }
    if(x%2==0) cout<<x;
    else cout<<x-mn;
    return 0;
}
