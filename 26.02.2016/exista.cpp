#include <fstream>

using namespace std;

ifstream f("exista.in");
ofstream g("exista.out");

int a[15][15];

int main()
{
    int n,m,k,i,j,ok1,ok2=0,s=0;
    f>>k>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {f>>a[i][j];
    if(a[i][j]==k)
        ok2=1;
    }
    if(ok2==0)
        g<<"nu exista";
    else
    {
        for(j=1;j<=m;j++)
        {
            ok1=0;
            for(i=1;i<=n&&ok1==0;i++)
            {
                if(a[i][j]==k)
                    ok1=1;
            }
            if(ok1)
                s+=j;
        }
    }
    g<<s;
    return 0;
}
