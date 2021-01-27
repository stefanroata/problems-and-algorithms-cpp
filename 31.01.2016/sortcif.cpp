#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("sortcif.in");
ofstream g("sortcif.out");

int v[101];

int sumcif(int x)
{
    if(x<0)
        x=-x;
    int c,s=0;
    while(x)
    {
        c=x%10;
        x/=10;
        s+=c;
    }
    return s;
}

bool cmp(int x,int y)
{
    return (sumcif(x)<sumcif(y));
}

int main()
{
    int n,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    sort(v+1,v+n+1,cmp);
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
