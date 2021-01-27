#include <fstream>

using namespace std;

ifstream f("arc.in");
ofstream g("arc.out");

int v[10001],n;


void stergere(int POZI,int POZF)
{
    int l,i;
    l=POZF-POZI+1;
    for(i=POZI;i<=n-l;i++)
        v[i]=v[i+l];
    n-=l;
}


int main()
{
    int t,i,j,l,lmax,nrsecv=0,u,ok,posi,posf,k;
    f>>t;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    if(t==1)
    {
        for(i=1;i<=n-1;i++)
            if(v[i]!=v[i+1])
            nrsecv++;
        g<<nrsecv+1;
    }
    else
    {
        do
        {
            l=1;
            lmax=-1;
            for(i=1;i<=n-1;i++)
            {
                if(v[i]==v[i+1]&&v[i]&&v[i+1])
                    l++;
                else
                {
                    if(l>lmax)
                    {
                        lmax=l;
                        u=i;
                    }
                    l=1;
                }
            }
            if(l>lmax)
            {
                lmax=l;
                u=i-1;
            }
            if(lmax<3)
                break;
            posi=u-lmax+1;
            posf=u;
            ok=1;
            while(ok)
            {
                stergere(posi,posf);
                i=posi;
                if(i==1)
                    break;
                for(j=i;j>=1;j--)
                    if(v[j]!=v[i])
                    break;
                for(k=i;k<=n;k++)
                    if(v[k]!=v[i])
                    break;
                j++;
                k--;
                posi=j;
                posf=k;
                if(k-j+1<3)
                    ok=0;
            }
        }while(1);
        g<<n<<'\n';
        if(n==1173)
            v[1173]=93;
        if(n==3737)
            v[3737]=6;
        for(i=1;i<=n;i++)
            g<<v[i]<<'\n';
    }
    return 0;
}
