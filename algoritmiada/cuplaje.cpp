#include <fstream>

using namespace std;

ifstream f("cuplaje.in");
ofstream g("cuplaje.out");

bool ocupat[200001];
int vf[200001],poz[200001],vb[200001];

int main()
{
    int n,m,i,j,cupluri=0,maxim=-1;
    bool ok;
    f>>n>>m;
    for(i=1;i<=n;i++)
        {
            f>>vb[i];
            if(vb[i]>maxim)
                maxim=vb[i];
        }
    for(i=1;i<=maxim;i++)
    {
        f>>vf[i];
        poz[i]=i;
    }
    do
    {
        ok=0;
        for(i=1;i<=m-1;i++)
        {
            if(vf[i]>vf[i+1])
            {
                swap(vf[i],vf[i+1]);
                swap(poz[i],poz[i+1]);
                ok=1;
            }
        }
    }while(ok);
    for(i=1;i<=m;i++)
    {
        //vf[i]
        for(j=vf[i];j>=1;j--)
        {
            if(vb[j]>=poz[i]&&ocupat[j]==0)
            {
                cupluri++;
                ocupat[j]=1;
                break;
            }
        }
    }
    g<<cupluri;
    return 0;
}
