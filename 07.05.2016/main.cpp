#include <fstream>

using namespace std;

ifstream f("matrice.in");
ofstream g("matrice.out");


bool v[10001];

void ciur()
{
    int i,j;
    v[0]=v[1]=1;
    for(i=4;i<=10000;i+=2)
        v[i]=1;
    for(i=3;i*i<=10000;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=10000;j+=i)
                v[j]=1;
        }
    }
}


int nrmaxim(int n)
{
    if(v[n]==0)
        return 1;
    int aux,p=1,rez,x;
    aux=n;
    x=n;
    do
    {
        aux/=10;
        p*=10;
    }while(aux);
    p/=10;
    do
    {
    rez=(n%p)*10+n/p;
    if(v[rez]==0)
    return 1;
    n=rez;
    }while(n!=x);
    return 0;
}

int a[51][51];


int main()
{
    ciur();
    int n,i,j,l1,l2,c1,c2;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>a[i][j];
    l1=1;
    l2=n;
    c1=2;
    c2=n-1;
    while(l1<=n/2)
    {
        for(i=c1;i<=c2;i++)
            swap(a[l1][i],a[l2][i]);
        l1++;
        l2--;
        c1++;
        c2--;
    }

    c1=1;
    c2=n;
    l1=2;
    l2=n-1;
    while(c1<=n/2)
    {
        for(i=l1;i<=l2;i++)
        {
            if(a[i][c1]!=a[i][c2]&&nrmaxim(a[i][c1])&&nrmaxim(a[i][c2]))
                swap(a[i][c1],a[i][c2]);
        }
            c1++;
            c2--;
            l1++;
            l2--;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
