#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("livada.in");
ofstream g("livada.out");


int v[700001];

int main()
{
    int n,m,p,i,j,l,lmax=1,st,dr,sm=0,mij;
    f>>m>>n>>p;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            f>>v[j];
        l=1;
        for(j=1;j<=n-1;j++)
        {
            if(v[j]==v[j+1])
                l++;
            else
            {
                if(l>lmax)
                    lmax=l;
                l=1;
            }
        }
        if(l>lmax)
            lmax=l;
        sort(v+1,v+n+1);
        mij=n/2;
        st=mij-1;
        dr=mij+1;
        while(v[st]==v[mij]&&st>=1)
            st--;
        while(v[dr]==v[mij]&&dr<=n)
            dr++;
        dr--;
        st++;
        l=dr-st+1;
        if(l>n/2)
            sm++;
    }
    g<<sm<<'\n'<<lmax;
    return 0;
}
