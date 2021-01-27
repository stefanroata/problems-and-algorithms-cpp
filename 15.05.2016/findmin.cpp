#include <cstdio>
#include <vector>

using namespace std;

FILE*f=freopen("findmin.in","r",stdin);
FILE*g=freopen("findmin.out","w",stdout);

int poz[1000005],v[1000005];


int k=1;

int cauta(int x);


int main()
{
    int n,minim,i,x,p;
    scanf("%d",&n);
    scanf("%d",&minim);
    v[k]=minim;
    printf("-1 ");
    for(i=2;i<=n;++i)
    {
        scanf("%d",&x);
        poz[x]=i;
        if(x<minim)
        {
            printf("-1 ");
            v[++k]=x;
        }
        else
        {
            p=cauta(x);
            printf("%d ",p);
        }

    }
    return 0;
}

int cauta(int x)
{
    int li,ls,d,dmax=0,p,mij;
    li=1;
    ls=k;
    while(li<=ls)
    {
        mij=(li+ls)/2;
        d=x-v[mij];
        if(d<0)
            li=mij+1;
        else
        {
        if(d>dmax)
        {
            dmax=d;
            p=mij;
        }
        ls=mij-1;
        }
    }
    return poz[p];
}
