#include <iostream>
#include <cmath>
using namespace std;

long long putere2(long long x)
{
    int i=0;
    while(x>=2)
    {
        x/=2;
        i++;
    }
    return pow(2,i);
}

int v[10001];
int main()
{
    long long n,i,a,b,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        y=putere2(b);
        if(y>=a&&y<=b)
            v[i]=y;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<'\n';
    return 0;
}
