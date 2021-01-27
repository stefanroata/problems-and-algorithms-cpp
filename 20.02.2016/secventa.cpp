#include <fstream>

using namespace std;

ifstream f("secventa.in");
ofstream g("secventa.out");

int v[100001];

int main()
{
    int n,i,l=1,lmax=0,s,ss,poz,p,j;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n-1;i++)
    {
        if(v[i]%2+v[i+1]%2==1)
            l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                poz=i;
            }
            else
                if(l==lmax)
            {
                s=0;
                p=i;
                for(j=p-l+1;j<=p;j++)
                    s+=v[j];
                ss=0;
                for(j=poz-l+1;j<=poz;j++)
                    ss+=v[j];
                if(s>=ss)
                    poz=i;
            }
            l=1;
        }
    }
    if(l>lmax)
            {
                lmax=l;
                poz=i;
            }
            else
                if(l==lmax)
            {
                s=0;
                p=i;
                for(j=p-l+1;j<=p;j++)
                    s+=v[j];
                ss=0;
                for(j=poz-l+1;j<=poz;j++)
                    ss+=v[j];
                if(s>=ss)
                    poz=i;
            }
    g<<poz-lmax+1<<" "<<poz;
    return 0;
}
