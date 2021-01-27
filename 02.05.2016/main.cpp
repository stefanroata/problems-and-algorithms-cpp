#include <iostream>

using namespace std;

bool pal(long long x)
{
    long long cif,r=0,aux;
    aux=x;
    do
    {
        cif=aux%10;
        aux/=10;
        r=r*10+cif;
    }while(aux);
    return (r==x);
}

bool prim(long long x)
{
    long long i;
    if(x<2)
        return 0;
    if(x==2)
        return 1;
    if(x%2==0)
        return 0;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return 0;
    return 1;
}


int main()
{
    long long x,i,n,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==1&&pal(x)&&prim(x))
            nr++;
    }
    cout<<nr;
    return 0;
}
