#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v;
    stack<string> st;
    set<string> s;
    while(n--)
    {
        string x;
        cin>>x;
        st.push(x);
    }
    s.insert(st.top());
    v.push_back(st.top());
    st.pop();
    while(!st.empty())
    {
      if(s.find(st.top()) == s.end())
      {
        s.insert(st.top());
        v.push_back(st.top());
      }
        st.pop();

    }
    for(auto a:v)
    {
      cout<<a[a.size()-2]<<a[a.size()-1];
    }
    return 0;
}
