#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        deque<int> dq1, dq2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' && s[i]!='b') dq1.push_front(i);
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B') dq2.push_front(i);
            if(s[i]=='b' && !dq1.empty())
            {
                s[dq1.front()] = '.';
                dq1.pop_front();
            }
            if(s[i]=='B' && !dq2.empty())
            {
                s[dq2.front()] = '.';
                dq2.pop_front();
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='.') cout<<s[i];
        }
        cout<<'\n';

    }
    return 0;
}
