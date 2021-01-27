#include <fstream>

using namespace std;

ifstream f("secvmax.in");
ofstream g("secvmax.out");

int v[10001];

int main()
{
    int n,i,l=0,lmax=0,s=0,poz,j,ss,p;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0)
            l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                poz=i-1;
            }
            if(l==lmax)
            {
                s=0;
                p=i-1;
                for(j=p-l+1;j<=p;j++)
                    s+=v[j];
                ss=0;
                for(j=poz-l+1;j<=poz;j++)
                    ss+=v[j];
                if(s>ss)
                {
                    poz=i-1;
                }
            }
            l=0;
        }
    }
    if(l>lmax)
            {
                lmax=l;
                poz=i-1;
            }
       if(l==lmax)
            {
                s=0;
                p=i-1;
                for(j=p-l+1;j<=p;j++)
                    s+=v[j];
                ss=0;
                for(j=poz-l+1;j<=poz;j++)
                    ss+=v[j];
                if(s>ss)
                {
                    poz=i-1;
                }
            }
    g<<poz-lmax+1<<" "<<poz;
    return 0;
}
