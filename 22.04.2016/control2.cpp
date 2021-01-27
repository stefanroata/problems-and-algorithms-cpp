#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("control2.in");
ofstream g("control2.out");

int v[101],w[101],rez[101];

bool prim(int x)
{
    int i;
    if(x<2)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}

int main()
{
    int n,i,l=1,k=1,nrvali=-1,nrvalp=-1,t=1,nr1=0,nr0=0,nr=0;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    sort(v+1,v+n+1);
    for(i=1;i<=n-1;i++)
    {
        if(v[i]==v[i+1])
            l++;
        else
        {
            w[k++]=l;
            l=1;
        }
    }
    w[k]=l;
    for(i=1;i<=k;i++)
    {
        if(i%3==1)
        {
            nrvali=nrvalp=0;
            if(w[i]%2==1)
                nrvali++;
            else
                nrvalp++;
        }
        else
        {
            if(w[i]%2==1)
                nrvali++;
            else
                nrvalp++;
        }
        if(i%3==0)
        {
            if(nrvali==0||nrvalp==0)
                rez[t++]=1;
            else
                rez[t++]=0;
        }
    }
    t--;
    for(i=1;i<=t;i++)
    {
        if(rez[i]==1)
            nr1++;
        if(rez[i]==0)
            nr0++;
    }
    nr=10*nr1+nr0;
    g<<nr<<'\n'<<prim(nr);
    return 0;
}
