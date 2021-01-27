#include <fstream>
using namespace std;

ifstream f("secvp.in");
ofstream g("secvp.out");

bool v[1005001];
int a[100001],suma[100001];

void ciur()
{
    int i,j;
    v[0]=v[1]=1;
    for(i=4;i<=1005000;i+=2)
        v[i]=1;
    for(i=3;i*i<=1005000;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=1005000;j+=i)
                v[j]=1;
        }
    }
}
int main()
{
    ciur();
    long long n,i,k,x,copie1,copie2,s=0,minim,nrmin;
    f>>n>>k;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x==0)
            a[i]=2;
        else
        {
        copie1=copie2=x;
        while(v[copie1]&&copie1)
            copie1--;
        while(v[copie2])
            copie2++;
        a[i]=min(x-copie1,copie2-x);
        }
        s+=a[i];

    }
    for(i=1;i<=k;i++)
        suma[1]+=a[i];
    minim=suma[1];
    nrmin=1;
    for(i=2;i<=n-k+1;i++)
    {
        suma[i]=suma[i-1]-a[i-1]+a[i+k-1];
        if(suma[i]<minim)
        {
            minim=suma[i];
            nrmin=1;
        }
        else
            if(suma[i]==minim)
            nrmin++;
    }
    g<<s<<'\n'<<minim<<" "<<nrmin;
    return 0;
}
