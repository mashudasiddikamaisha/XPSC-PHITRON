#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long long int sum=0;int c=0,mx=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            mx=max(mx,a[i]);
            if((sum-mx)==mx) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
