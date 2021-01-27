#include <fstream>

using namespace std;

ifstream f("multimi.in");
ofstream g("multimi.out");

long long v[30005];

int main()
{
    long long n,i,s,d,minim=30002,maxim=-1,maxx=-1,t=0,poz1,poz2,e;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>s>>d;
        if(d>maxim)
        maxim=d;
        if(d<minim)
            minim=d;
        if(s<minim)
            minim=s;
        if(s>maxim)
            maxim=s;
        v[s]++;
        v[d+1]--;
    }
    for(i=minim;i<=maxim;i++)
        v[i]=v[i]+v[i-1];
    for(i=minim;i<=maxim;i++)
    {
        if(v[i]>maxx)
            maxx=v[i];
    }
    for(i=minim;i<=maxim;i++)
    {
        if(v[i]==maxx)
        {
            t++;
            if(t==1)
                poz1=i;
            poz2=i;
        }
    }
    e=poz1;
    while(v[e]==maxx)
        e++;
    e--;
    if(maxx<n)
        g<<"multimea vida";
    else
    if(maxx==1)
        g<<"multimea vida";
    else
    {
    for(i=poz1;i<=poz2;i++)
        g<<i<<" ";
    }
    return 0;
}
