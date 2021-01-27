#include <fstream>

using namespace std;

ifstream f("ants.in");
ofstream g("ants.out");

long long d[100001],v[100001];

int main()
{
    long long s=0,li,ls,mij,i,n,dif,minim=1000000001,ok,det,nr;
    f>>n;
    for(i=1;i<=n;i++)
        {
            f>>d[i]>>v[i];
            s+=(long long)v[i];
            if(v[i]<minim)
                minim=v[i];
        }
    li=minim;
    ls=s/n;
    mij=(li+ls)/2;
    ok=0;
    while(ok==0&&li<=ls)
    {
        nr=v[1];
        for(i=2;i<=n;i++)
        {
            dif=mij-nr;
            det=v[i]-dif-(d[i]-d[i-1]);
            nr=det;
        }
       // nr=(long long)s-n*mij+d[1]-d[n];
        if(nr>mij)
        {
            li=mij+1;
            mij=(li+ls)/2;
        }
        if(nr<mij)
        {
            ls=mij-1;
            mij=(li+ls)/2;
        }
        if(nr==mij)
        {
            ok=1;
            g<<mij;
        }
    }
    return 0;
}
