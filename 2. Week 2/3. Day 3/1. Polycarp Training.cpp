#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<int> ms;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }

    int ans = 0, prob = 1;
    while(!ms.empty())
    {
        auto lb = ms.lower_bound(prob);
        if(lb != ms.end())
        {
            ans++;
            ms.erase(lb);
        }
        else break;
        prob++;
    }
    cout<<ans;
    return 0;
}
