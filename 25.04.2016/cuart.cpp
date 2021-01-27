#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("cuart.in");
ofstream g("cuart.out");

int transf_Gina(int x)
{
    int v[15],cif,i=1,nr=0,n;
    do
    {
        cif=x%10;
        x/=10;
        v[i++]=cif;
    }while(x);
    i--;
    reverse(v+1,v+i+1);
    n=i;
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==1)
            nr=nr*10+v[i];
    }
    if(nr==0)
        return -1;
    else
        return nr;
}



int transf_Mihai(int x)
{
    int v[15],cif,i=1,nr=0,n;
    do
    {
        cif=x%10;
        x/=10;
        v[i++]=cif;
    }while(x);
    i--;
    reverse(v+1,v+i+1);
    n=i;
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0)
            nr=nr*10+v[i];
    }
    if(nr==0)
        return -1;
    else
        return nr;
}


int main()
{
    long long p,n,i,x,primulG=-1,primulM=-1,rez,o=0,u=0,maxim=0,t=1,cuart=0,s,nrG=0,nrM=0;
    f>>p>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        rez=transf_Gina(x);
        if(rez!=-1)
        {
            o++;
            if(o==1)
                primulG=rez;
            t=1;
            s=t;
            cuart=0;
            while(s<=rez)
            {
                if(s==rez)
                {
                    cuart=1;
                    break;
                }
                t+=4;
                s+=t;
            }
            if(cuart)
                nrG++;
        }
        else
        {
            if(x>maxim)
                maxim=x;
        }
    }



        for(i=1;i<=n;i++)
    {
        f>>x;
        rez=transf_Mihai(x);
        if(rez!=-1)
        {
            u++;
            if(u==1)
                primulM=rez;
            t=1;
            s=t;
            cuart=0;
            while(s<=rez)
            {
                if(s==rez)
                {
                    cuart=1;
                    break;
                }
                t+=4;
                s+=t;
            }
            if(cuart)
                nrM++;
        }
        else
        {
            if(x>maxim)
                maxim=x;
        }
    }

    if(p==1)
        g<<maxim;
    if(p==2)
    {
        if(nrG>nrM)
            g<<1;
        if(nrG<nrM)
            g<<2;
        if(nrG==nrM)
            {
                if(primulG>primulM)
                    g<<1;
                if(primulG<primulM)
                    g<<2;
            }
        if(primulG==-1&&primulM==-1)
            g<<0;
    }
    if(p==3)
    {
        if(nrG>nrM)
            g<<nrG;
        if(nrG<nrM)
            g<<nrM;
        if(nrG==nrM)
            {
                if(primulG>primulM)
                    g<<primulG;
                if(primulG<primulM)
                    g<<primulM;
            }
        if(primulG==-1&&primulM==-1)
            g<<0;
    }
    return 0;
}
