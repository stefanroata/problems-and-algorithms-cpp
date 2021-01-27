#include <fstream>

using namespace std;

ifstream f("schi.in");
ofstream g("schi.out");

int v[100001],secv[100001],lung[100001];

int cautare_binara(int x,int t)
{
    int mij,li,ls;
    li=1;
    ls=t;
    while(li<=ls)
    {
        mij=(li+ls)/2;
        if(secv[mij]==x)
            return lung[mij];
        else
            if(secv[mij]<x)
            li=mij+1;
        else
            ls=mij-1;
    }
    return 0;
}

int main()
{
    int n,i,x,maxim=-1,j=0,k,l;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x>maxim)
            maxim=x;
        v[i]=maxim;
    }
    l=1;
    for(i=1;i<=n-1;i++)
    {
        if(v[i]==v[i+1])
            l++;
        else
        {
            j++;
            secv[j]=v[i];
            lung[j]=l;
            l=1;
        }
    }
    j++;
    secv[j]=v[i];
    lung[j]=l;
    f>>k;
    for(i=1;i<=k;i++)
    {
        f>>x;
        g<<cautare_binara(x,j)<<" ";
    }
    return 0;
}
