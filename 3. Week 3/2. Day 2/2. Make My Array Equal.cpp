#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n+1);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=-1;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0 )
            {
                if(a[i]!=a[i+1]) sum++;
            }
        }
        if(sum<=1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
