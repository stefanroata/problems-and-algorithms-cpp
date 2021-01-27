#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("comisia.in");
ofstream g("comisia.out");

int v[200001];

int main()
{
    int n,i,x,maxim=-1;
    long long s=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x>maxim)
            maxim=x;
    }
    for(i=1;i<=n;i++)
    f>>v[i];
    sort(v+1,v+n+1);
    for(i=1;i<=maxim;i++)
        s+=(long long)v[i];
    g<<s;
    return 0;

}
