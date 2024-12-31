#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    map<char, int> cnt;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        cnt[s[i]]++;
    }

    int odd_cnt=0;
    for(auto [key,occ]:cnt)
    {
        if(occ%2!=0)
        {
            odd_cnt++;
        }
    }
    if(odd_cnt>1)
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    string first, last, middle;
    for(auto [key, occ]:cnt)
    {
        if(occ%2!=0)
        {
            for(int i=1;i<=occ;i++)
            {
                middle.push_back(key);
            }
        }
        else
        {
            for(int i=1;i<=(occ/2);i++)
            {
                first.push_back(key);
                last.push_back(key);
            }
        }
    }
    reverse(last.begin(), last.end());
    string ans=first+middle+last;
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

