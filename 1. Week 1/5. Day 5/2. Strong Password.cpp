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
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                if(s[i]=='x') s+="y";
                else s+="x";
                break;
            }
            if(s[i]==s[i+1])
            {
                if(s[i]!='x')
                {
                    s = s.substr(0, i+1) + "x" + s.substr(i+1,n-1);
                    break;
                }
                else
                {
                    s = s.substr(0,i+1) + "y" + s.substr(i+1,n-1);
                    break;
                }
            }
        }
        cout<<s<<'\n';
    }

    return 0;
}
