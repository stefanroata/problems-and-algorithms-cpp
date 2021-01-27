#include <fstream>

using namespace std;

ifstream f("copaci1.in");
ofstream g("copaci1.out");

int a[102][102];

int main()
{
    int n,m,i,j,exista0,exista_noi,pasi=0,nrv;
    f>>n>>m;
    for(i=0;i<=m+1;i++)
        a[0][i]=a[n+1][i]=-1;
    for(i=0;i<=n+1;i++)
        a[i][0]=a[i][m+1]=-1;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    while(1)
    {
        exista0=0;exista_noi=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]==0)
                {
                    nrv=0;
                    exista0=1;
                    if(a[i-1][j]==1)
                        nrv++;
                    if(a[i+1][j]==1)
                        nrv++;
                    if(a[i][j-1]==1)
                        nrv++;
                    if(a[i][j+1]==1)
                        nrv++;
                    if(nrv>=2)
                    {
                        exista_noi=1;
                        a[i][j]=2;
                    }
                }
            }
        }
        if(!exista_noi)
            break;
        else
            pasi++;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]==2)
                    a[i][j]=1;
            }
        }
    }
    if(exista0)
        g<<pasi<<'\n'<<"IMPOSIBIL";
    else
        g<<pasi;
    return 0;
}
