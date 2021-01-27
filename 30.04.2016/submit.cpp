#include <fstream>

using namespace std;

ifstream f("submit.in");
ofstream g("submit.out");


int v[101];
bool w[101];

int main()
{
    int i,j,b,n,m,s,maxim=0;
    bool ok;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f>>b;
    f>>m;
    for(i=1;i<=m;i++)
    {
        ok=1;
        s=0;
        for(j=1;j<=n;j++)
        {
            f>>w[j];
            if(w[j]==0)
                ok=0;
            else
                s+=v[j];
        }
        if(ok)
            s+=b;
        s-=2*(i-1);
        if(s>maxim)
            maxim=s;
    }
    g<<maxim;
    return 0;
}
