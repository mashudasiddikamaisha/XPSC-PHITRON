#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b,c, cnt=0;
    for(a=0; a<=s;a++)
    {
        for(b=0; a+b<=s;b++)
        {
            for(c=0;a+b+c<=s;c++)
            {
                if(a*b*c<=t) cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
