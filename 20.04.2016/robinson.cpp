#include <fstream>

using namespace std;

ifstream f("robinson.in");
ofstream g("robinson.out");

int a[30][30];

int main()
{
    int n,m,l,c,i,aux,j,r;
    f>>m>>n>>l>>c;
    for(i=0;i<=m+1;i++)
        a[0][i]=a[m+1][i]=a[i][0]=a[i][m+1]=-1;
    aux=n;
    for(i=1;i<=m;i++,aux++)
        a[1][i]=a[i][1]=aux;
    for(i=2;i<=m;i++)
        for(j=2;j<=m;j++)
        a[i][j]=(a[i-1][j]+a[i][j-1])%1000;
    g<<a[m][m]<<'\n';
    g<<l<<" "<<c<<'\n';
    while(a[l][c]!=-1)
    {
        r=a[l][c]%4;
        a[l][c]=-1;
        if(r==0)
            l--;
        if(r==1)
            c++;
        if(r==2)
            l++;
        if(r==3)
            c--;
        if(a[l][c]!=-1)
            g<<l<<" "<<c<<'\n';
    }
    return 0;
}
