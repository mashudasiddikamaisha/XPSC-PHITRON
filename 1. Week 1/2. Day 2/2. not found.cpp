#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt[26]={0};
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int x=s[i]-'a';
        cnt[x]++;
    }
    bool flag=true;
    for(int i=0; i<26;i++)
    {
        if(cnt[i]==0)
        {
            char c = i+'a';
            cout<<c;
            flag=false;
            break;
        }
    }
    if(flag) cout<<"None";
    return 0;
}
