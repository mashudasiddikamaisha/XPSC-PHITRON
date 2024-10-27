#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()==4) cout<<s;
    else
    {
        int i=4-s.size();
        while(i!=0)
        {
            cout<<0;
            i--;
        }
        cout<<s;
    }

    return 0;
}
