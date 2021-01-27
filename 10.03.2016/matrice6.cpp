#include <fstream>

using namespace std;

ifstream f("matrice6.in");
ofstream g("matrice6.out");

int a[101][101];

int main()
{
    int n,i,j,maxim=-1,minim=1000000001,ok;
    f>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            f>>a[i][j];
            if(a[i][j]>maxim)
                maxim=a[i][j];
            if(a[i][j]<minim)
                minim=a[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        ok=0;
        for(j=1;j<=n&&ok==0;j++)
        {
            if(a[i][j]==maxim)
                ok=1;
        }
        if(ok)
        {
            for(j=1;j<=n;j++)
                a[i][j]+=minim;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}

