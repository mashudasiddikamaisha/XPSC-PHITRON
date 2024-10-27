#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0, j=n-1, x=0, y=0;
    bool flag=false;
    while(i<=j)
    {
        if(a[i]>a[j])
        {
            if(flag==false) x+=a[i];
            else y+=a[i];
            i++;
        }
        else
        {
            if(flag==false) x+=a[j];
            else y+=a[j];
            j--;
        }
        if(flag) flag=false;
        else flag=true;
    }
    cout<<x<<" "<<y;
    return 0;
}
