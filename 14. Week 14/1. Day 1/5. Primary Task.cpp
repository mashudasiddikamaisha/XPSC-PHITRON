#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if((x>=102 && x<=109) || (x>=1010 && x<=1099)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
