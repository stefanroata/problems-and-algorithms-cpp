#include <fstream>

using namespace std;

ifstream f("piramide.in");
ofstream g("piramide.out");

bool v[100001];
int s[100001];

int main()
{
    int n,k,x,i,pi,ps,t,dif,poz,p,ok=0,nrp,nrpc=0,maxim=0;
    int dif1,t1,pi1,ps1;

    f>>n>>x>>k;
    for(i=1;i<=k;i++)
    {
        f>>poz;
        v[poz]=1;
    }
    for(i=1;i<=n;i++)
        s[i]=s[i-1]+v[i];
    pi=1;
    ps=3;
    p=1;
    dif=2;
    t=3;
    do
    {
        if(x>=pi&&x<=ps)
        {
            ok=1;
            nrp=p;
        }
        if(s[ps]-s[pi-1]>maxim)
        {
            maxim=s[ps]-s[pi-1];
            nrpc=p;
        }
        dif1=dif;
        t1=t;
        pi1=pi;
        ps1=ps;

        dif1+=t1;
        t1++;
        pi1=ps1+1;
        ps1=pi1+dif1;

        if(ps1>n)
            break;
        else
            {
        dif+=t;
        t++;
        pi=ps+1;
        ps=pi+dif;
        p++;
            }
    }while(1);

    if(ok==1)
        g<<nrp<<'\n';
    else
        g<<0<<'\n';
    g<<p<<'\n';
    g<<n-ps<<'\n';
    g<<nrpc;
    return 0;
}
