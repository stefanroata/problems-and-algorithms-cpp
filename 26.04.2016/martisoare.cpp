#include <fstream>

using namespace std;

ifstream f("martisoare.in");
ofstream g("martisoare.out");

int v[100001],a[20],b[20];

int main()
{
    int n,i,primul,ultimul,poz,ok,cif,nrc,j,aux,cif1,cif2,gasit,aux1;
    f>>n;
    if(n>4)
    {
        for(i=1;i<=n;i++)
            f>>v[i];
        ok=0;
        for(i=1;i<=n-1&&!ok;i++)
        {
            if(v[i]==v[i+1]-1)
            {
                ok=1;
                poz=i;
            }
        }
        primul=v[poz]-poz+1;
        ultimul=v[poz]+n-poz;
        gasit=0;
        for(i=1;i<=n;i++)
        {
            j=1;
            aux1=primul;
            do
            {
                cif=aux1%10;
                aux1/=10;
                a[j]=cif;
                j++;
            }while(aux1);
            j--;
            nrc=j;
            j=1;
            aux=v[i];
            do
            {
                cif=aux%10;
                aux/=10;
                b[j]=cif;
                j++;
            }while(aux);
            for(j=1;j<=nrc&&!gasit;j++)
            {
                if(a[j]!=b[j])
                {
                    cif1=a[j];
                    cif2=b[j];
                    gasit=1;
                }
            }
            if(gasit==1)
                break;
            primul++;
        }
        if(gasit==0)
            cif1=cif2=0;
        if(cif1>cif2)
            swap(cif1,cif2);
        g<<cif1<<" "<<cif2<<'\n'<<ultimul;
    }
    else
    {
        for(i=1;i<=n;i++)
            f>>v[i];
        ok=0;
        for(i=1;i<=n-1&&!ok;i++)
        {
            if(v[i]==v[i+1]-1)
            {
                ok=1;
                poz=i;
            }
        }
        if(ok)
        {
        primul=v[poz]-poz+1;
        ultimul=v[poz]+n-poz;
        gasit=0;
        for(i=1;i<=n;i++)
        {
            j=1;
            aux1=primul;
            do
            {
                cif=aux1%10;
                aux1/=10;
                a[j]=cif;
                j++;
            }while(aux1);
            j--;
            nrc=j;
            j=1;
            aux=v[i];
            do
            {
                cif=aux%10;
                aux/=10;
                b[j]=cif;
                j++;
            }while(aux);
            for(j=1;j<=nrc&&!gasit;j++)
            {
                if(a[j]!=b[j])
                {
                    cif1=a[j];
                    cif2=b[j];
                    gasit=1;
                }
            }
            if(gasit==1)
                break;
            primul++;
        }
        if(gasit==0)
            cif1=cif2=0;
        if(cif1>cif2)
            swap(cif1,cif2);
        g<<cif1<<" "<<cif2<<'\n'<<ultimul;
        }
        else
        {
            if(v[2]==v[4]-2)
            {
                ultimul=v[4];
                primul=v[4]-n+1;
                j=1;
            aux1=primul;
            do
            {
                cif=aux1%10;
                aux1/=10;
                a[j]=cif;
                j++;
            }while(aux1);
            j--;
            nrc=j;
            j=1;
            aux=v[1];
            do
            {
                cif=aux%10;
                aux/=10;
                b[j]=cif;
                j++;
            }while(aux);
            gasit=0;
            for(j=1;j<=nrc&&!gasit;j++)
            {
                if(a[j]!=b[j])
                {
                    cif1=a[j];
                    cif2=b[j];
                    gasit=1;
                }
            }
        if(cif1>cif2)
            swap(cif1,cif2);
        g<<cif1<<" "<<cif2<<'\n'<<ultimul;
            }



        if(v[1]==v[n]-n+1)
        {
            ultimul=v[n];
            primul=v[1];
            primul++;
            aux1=primul;
            j=1;
            do
            {
                cif=aux1%10;
                aux1/=10;
                a[j]=cif;
                j++;
            }while(aux1);
            j--;
            nrc=j;
            j=1;
            aux=v[2];
            do
            {
                cif=aux%10;
                aux/=10;
                b[j]=cif;
                j++;
            }while(aux);
            gasit=0;
            for(j=1;j<=nrc&&!gasit;j++)
            {
                if(a[j]!=b[j])
                {
                    cif1=a[j];
                    cif2=b[j];
                    gasit=1;
                }
            }
        if(cif1>cif2)
            swap(cif1,cif2);
        g<<cif1<<" "<<cif2<<'\n'<<ultimul;
        }


        if(v[1]==v[3]-2)
        {
            primul=v[1];
            ultimul=v[1]+n-1;
            primul++;
            aux1=primul;
            j=1;
            do
            {
                cif=aux1%10;
                aux1/=10;
                a[j]=cif;
                j++;
            }while(aux1);
            j--;
            nrc=j;
            j=1;
            aux=v[2];
            do
            {
                cif=aux%10;
                aux/=10;
                b[j]=cif;
                j++;
            }while(aux);
            gasit=0;
            for(j=1;j<=nrc&&!gasit;j++)
            {
                if(a[j]!=b[j])
                {
                    cif1=a[j];
                    cif2=b[j];
                    gasit=1;
                }
            }
        if(cif1>cif2)
            swap(cif1,cif2);
        g<<cif1<<" "<<cif2<<'\n'<<ultimul;
        }
        }
    }
    return 0;
}
