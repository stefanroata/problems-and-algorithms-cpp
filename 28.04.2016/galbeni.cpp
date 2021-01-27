#include <fstream>

using namespace std;

ifstream f("galbeni.in");
ofstream g("galbeni.out");

int v[500001],w[500001];

int putere(int k)
{
    if(k==1)
        return 10;
    if(k==2)
        return 100;
    if(k==3)
        return 1000;
}

int cautare(int t,int nre)
{
    int j;
    for(j=1;j<=nre;j++)
        if(v[j]==t)
        return j;
    return -1;
}

int main()
{
    int k,n,i=1,cif,poz1,poz2,per,ok,j;
    long long s,aux;
    f>>s>>k>>n;
    v[1]=s;
    while(1)
    {
        aux=s;
        do
        {
            cif=aux%10;
            aux/=10;
            if(cif)
                s=s*cif;
        }while(aux);
        s=s*8;
        s=s/9;
        s=s%putere(k);
        while(s<putere(k-1))
            s=s*10+9;
        s=(int)s;
        ok=cautare(s,i);
        if(ok==-1)
        {
            i++;
            v[i]=s;
        }
        else
        {
            poz1=ok;
            poz2=i+1;
            v[poz2]=s;
            break;
        }
    }
    if(n<poz2)
        g<<v[n];
    else
    {
        per=poz2-poz1;
        n=n-(poz1-1);
        n=n%per;
        j=1;
        for(i=poz1;i<=poz2-1;i++)
            w[j++]=v[i];
        if(n==0)
            n=j-1;
        g<<w[n];
    }
    return 0;
}
