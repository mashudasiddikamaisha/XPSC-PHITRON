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
        string s;
        cin>>s;
        int cnt=0;
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && st.top()!=s[i])
            {
                st.pop();
                cnt++;
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(cnt%2==0) cout<<"Ramos\n";
        else cout<<"Zlatan\n";
    }
}
