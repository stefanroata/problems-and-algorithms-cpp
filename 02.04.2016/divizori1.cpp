#include <fstream>
#include <algorithm>
using namespace std;

ifstream f("divizori1.in");
ofstream g("divizori1.out");

int v[100001];
int a[10001],b[10001];

int main()
{
    int n,k,i,x,maxim=-1,j;
    f>>n>>k;
    for(i=1;i<=n;i++)
    f>>a[i];
    for(i=1;i<=k;i++)
    {
        f>>b[i];
        if(b[i]>maxim)
            maxim=b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=a[i];j<=maxim;j+=a[i])
            v[j]++;
    }
    for(i=1;i<=k;i++)
        g<<v[b[i]]<<'\n';
    return 0;
}
