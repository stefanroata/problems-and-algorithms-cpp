#include <fstream>

using namespace std;

ifstream f("colier.in");
ofstream g("colier.out");

short v[50001];

int main()
{
    int n,i,c,cifmax,cifmin,poz1,poz2,aux1,aux2,j,nr,cif,x,cifu,cifz,nr1=0,p=0,l,primul,ultimul;
    f>>c;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        aux1=aux2=x;
        //det. cif min
        cifmax=-1;
        cifmin=10;
        j=1;
        do
        {
            cif=aux1%10;
            aux1/=10;
            if(cif<cifmin)
            {
                cifmin=cif;
                poz1=j;
            }
            j++;
        }while(aux1);

        j=1;

        do
        {
            cif=aux2%10;
            aux2/=10;
            if(cif>cifmax)
            {
                cifmax=cif;
                poz2=j;
            }
            j++;
        }while(aux2);

        if(poz1>poz2)
            nr=10*cifmin+cifmax;
        else
            nr=10*cifmax+cifmin;
        cifu=nr%10;
        nr/=10;
        cifz=nr%10;
        if(cifz<cifu)
        {
            v[i]=1;
            nr1++;
        }
        else
            v[i]=2;
    }
    if(c==1)
        g<<nr1;
    else
    {
        l=1;
        for(i=1;i<=n-1;i++)
        {
            if(v[i]==v[i+1])
                l++;
            else
            {
                p++;
                l=1;
                if(p==1)
                    primul=v[i];
            }
        }
        p++;
        ultimul=v[n];
        if(primul==ultimul)
            p--;
        g<<p;
    }
    return 0;
}
