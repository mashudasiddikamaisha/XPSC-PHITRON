#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
      int x,y;
      cin>>x>>y;
      int a = (y+1)/2;
      int b = (a*5*3)-(y*2*2);
      x-=b;
      x=max(0,x);
      a+=(x+15-1)/15;
      cout<<a<<'\n';
    }
}
