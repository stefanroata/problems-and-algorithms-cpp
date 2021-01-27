#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("crb.in");
ofstream g("crb.out");

int v[1001],v1[1001],n;

bool cmp(int x,int y){return (x>y);}

int cautare_binara(int x)
{
    int mij,ls,ld;
    ls=1;
    ld=n;
    while(ls<=ld)
    {
        mij=(ls+ld)/2;
        if(v1[mij]==x)
            return mij;
        else
            if(v1[mij]>x)
            ls=mij+1;
        else
            ld=mij-1;
    }

}

int main()
{
    int i,nr=0;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        v1[i]=v[i];
    }
    sort(v1+1,v1+n+1,cmp);
    for(i=1;i<=n;i++)
    {
        if(cautare_binara(v[i])==i)
            nr++;
    }
    g<<nr;
    return 0;
}
