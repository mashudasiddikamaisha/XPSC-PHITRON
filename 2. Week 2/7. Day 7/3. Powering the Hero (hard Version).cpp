#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        multiset<int> ms;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x!=0)
            {
                ms.insert(x);
            }
            else
            {
                if(!ms.empty())
                {
                    auto it= ms.end();
                    it--;
                    ans+=*it;
                    ms.erase(it);
                }
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
