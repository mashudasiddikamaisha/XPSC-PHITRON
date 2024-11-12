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
        string s;
        cin>>s;
        deque<char> dq;
        for(auto c : s)
        {
            dq.push_back(c);
        }
        while(!dq.empty() && dq.front()!=dq.back())
        {
            dq.pop_front();
            dq.pop_back();
        }
        cout<<dq.size()<<'\n';

    }
    return 0;
}
