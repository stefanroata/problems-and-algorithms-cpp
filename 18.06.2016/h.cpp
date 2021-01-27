#include <iostream>
#include <cstdio>

using namespace std;

FILE*f=freopen("h.in","r",stdin);
FILE*g=freopen("h.out","w",stdout);

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cout<<i<<" ";
    for(i=3*n+1;i<=4*n;i++)
        cout<<i<<" ";
    return 0;
}
