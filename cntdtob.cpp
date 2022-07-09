#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int cnbit(int n)
{
    int cn=0;
    while(n>0)
    {
        cn+=(n&1);
        n=n>>1;
    }
    return cn;
}
int cnbittrick(int n)
{
    int cn=0;
    while(n>0)
    {
        n=(n&(n-1));
        cn++;
    }
    return cn;
}
int dtob(int n)
{
    int ans=0,p=1;
    while(n>0)
    {
        ans+=p*(n&1);
        p=p*10;
        n=n>>1;
    }
    return ans;
}
int main() {
int n;
cin>>n;
// cout<<cnbit(n);
// cout<<cnbittrick(n);
cout<<dtob(n);
 return 0;
}

