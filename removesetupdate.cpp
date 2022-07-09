#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fst  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int geti(int n,int i)
{
    int msk=(1<<i);
    return (n&msk)>0?1:0;
}
void remi(int &n,int i)
{
    int msk=~(1<<i);
    n=(n&msk);
}
void seti(int &n,int i)
{
    int msk=(1<<i);
    n=(n|msk);
}
void upi(int &n,int i,int v)
{
    remi(n,i);
    int msk=(v<<i);
    n=(n|msk);
}
void remlasti(int &n,int i)
{
    int msk=(-1<<i);
    n=(n&msk);
}
void remij(int &n,int i,int j)
{
    int a=(-1<<j+1);
    int b=(1<<i)-1;
    int msk=a|b;
    n=(n&msk);
}

int main()
{fst

 int n=31;

for(int i=8;i>=0;i--)
 cout<<geti(n,i);
 cout<<'\n';
// remi(n,2);
// seti(n,8);
// upi(n,8,0);
// upi(n,2,0);
// remlasti(n,3);
remij(n,1,3);
for(int i=8;i>=0;i--)
 cout<<geti(n,i);

    return 0;
}
