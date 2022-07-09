#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fst  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int geti(int n,int i)
{
    int msk=(1<<i);
    return (n&msk)>0?1:0;
}

void remij(int &n,int i,int j)
{
    int a=(-1<<j+1);
    int b=(1<<i)-1;
    int msk=a|b;
    n=(n&msk);
}
void repij(int &n,int m,int i,int j)
{
    remij(n,i,j);
    int msk=(m<<i);
    n=n|msk;
}

int main()
{fst

 int n=15,m=2;
 int i=1,j=3;

for(int i=8;i>=0;i--)
 cout<<geti(n,i);
 cout<<"->"<<n;
 cout<<'\n';
repij(n,m,i,j);
for(int i=8;i>=0;i--)
 cout<<geti(n,i);
 cout<<"->"<<n;

    return 0;
}
