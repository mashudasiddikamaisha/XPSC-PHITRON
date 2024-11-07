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
        int n;
        cin>>n;
        deque<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n<4) cout<<-1<<'\n';
        else
        {
            bool flag = false;
            int mn=1, mx=n, l=0, r=n-1;
            while(l<=r)
            {
                if((a.front()== mn && a.back()==mx) || (a.front()==mx && a.back()==mn))
                {
                    a.pop_back();
                    a.pop_front();
                    l++, r--;
                    mn++, mx--;
                }
                else if(a.front()==mn)
                {
                    a.pop_front();
                    l++;
                    mn++;
                }
                else if(a.front()==mx)
                {
                    a.pop_front();
                    l++;
                    mx--;
                }
                else if(a.back()==mn)
                {
                    a.pop_back();
                    r--;
                    mn++;
                }
                else if(a.back()==mx)
                {
                    a.pop_back();
                    r--;
                    mx--;
                }
                else
                {
                    cout<<l+1<<" "<<r+1<<'\n';
                    flag=true;
                    break;
                }

            }
            if(!flag) cout<<-1<<'\n';
        }
    }

    return 0;
}
