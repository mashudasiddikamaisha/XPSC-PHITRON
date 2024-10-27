#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x=-1;
    cin>>a>>b>>c;
    for(int i=a; i<=b;i++)
    {
        if(i%c==0)
        {
            x=i;
            break;
        }
    }
    cout<<x;
    return 0;
}
