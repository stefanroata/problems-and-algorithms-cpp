#include <fstream>

using namespace std;

ifstream f("patrat2.in");
ofstream g("patrat2.out");

int a[202][202];
bool v[202][202];

int dx[]={-1,-1,0,1,1,1,0,-1},dy[]={0,1,1,1,0,-1,-1,-1};

int main()
{
    int n,m,i,j,nr=0,ok,k,t,l,nrcp=0,lmax=0;
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            ok=1;
            for(k=0;k<=7&&ok;k++)
            {
                if(a[i+dx[k]][j+dy[k]]>=a[i][j])
                    ok=0;
            }
            if(ok)
                {
                    v[i][j]=1;
                    nr++;
                }
        }
    }
    g<<nr<<'\n';


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(v[i][j])
            {
                t=i+1;
                while(t<=n)
                {
                while(v[t][j]!=1&&t<=n)
                    t++;
                l=t-i;
                if(v[t][j+l]==1&&v[t-l][j+l]==1&&t<=n&&j+l<=m&&t-l>=1)
                {
                    nrcp++;
                    if(l+1>lmax)
                        lmax=l+1;
                }
                t++;
                }
            }
        }
    }
    g<<nrcp<<'\n'<<lmax;
    return 0;
}
