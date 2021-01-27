#include <fstream>

using namespace std;

ifstream f("max_suma.in");
ofstream g("max_suma.out");

int v[101];

int main()
{
    int n,m,i,j,maxim,s;
    f>>n;
    f>>m;
    for(i=1;i<=n;i++)
    {
        s=0;
        maxim=-1;
        for(j=1;j<=m;j++)
        {
            f>>v[i];
            if(v[i]>maxim)
                maxim=v[i];
            s+=v[i];
        }
        g<<maxim<<" "<<s<<'\n';
    }
    return 0;
}
