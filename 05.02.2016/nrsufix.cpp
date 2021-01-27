#include <fstream>

using namespace std;

long long nrc(long long x)
{
    int cont=0;
    do
    {
        x=x/10;
        cont++;
    }while(x);
    return cont;
}

long long pow10(long long n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
        p*=10;
    return p;
}

ifstream f("nrsufix.in");
ofstream g("nrsufix.out");

int main()
{
    long long x,n,t,r,nr,ok=0;
    f>>x;
    t=pow10(nrc(x));

    while(f>>n)
    {
        r=n%t;
        if(r==x)
            {nr=n;
            ok=1;
            }
    }
    if(ok==0)
        g<<"nu exista";
    else
    g<<nr;
    return 0;
}
