#include <fstream>

using namespace std;

ifstream f("munte.in");
ofstream g("munte.out");

int x[101],pozitii[101];

void stergere(int poz,int &nre)
{
    int i;
    for(i=poz;i<=nre;i++)
        x[i]=x[i+1];
    nre--;
}


int main()
{
    int n,i,poz1,poz2,poz3,p,s=0,t=0,nrp=0;
    f>>n;
    for(i=1;i<=n;i++)
        f>>x[i];
    while(p)
    {
    p=0;
    i=1;
    do
    {
        poz1=poz2=poz3=0;
        poz1=i;
        while(x[i]<x[i+1]&&i+1<=n)
            i++;
        if(i>poz1)
        {
            poz2=i;
            while(x[i]>x[i+1]&&i+1<=n)
                i++;
            if(i>poz2)
                poz3=i;
        }
        if(poz3-poz1+1>2)
        {
            p++;
            pozitii[p]=poz2;
        }
        else
            i++;
    }while(i<=n);
    s+=p;
    t++;
    if(t==1)
        nrp=p;
    for(i=p;i>=1;i--)
        stergere(pozitii[i],n);
    }
    g<<nrp<<'\n'<<s<<'\n'<<n;
    return 0;
}
