#include <iostream>
#include <cstdio>
#define MAX 2000000004

using namespace std;

FILE*f=freopen("numar2.in","r",stdin);
FILE*g=freopen("numar2.out","w",stdout);

bool palindrom(int x)
{
    int a,r=0,cif;
    a=x;
    do
    {
        cif=a%10;
        r=r*10+cif;
        a/=10;
    }while(a);
    return (x==r);
}

int v[150];

int main()
{
    int n,i,t,k=0,li,ls,dif,mij,poz,difmin=MAX;
    cin>>n;
    if(n==0)
        cout<<0;
    else
    {
    for(i=1;i*i*i<=MAX;i++)
    {
        t=i*i*i;
        if(palindrom(t))
            v[++k]=t;
    }
    li=1;
    ls=k;
    while(li<=ls)
    {
        mij=(li+ls)/2;
        dif=n-v[mij];
        if(dif<0)
            ls=mij-1;
        else
       {
           if(dif<difmin)
           {
               difmin=dif;
               poz=mij;
           }
           li=mij+1;
       }
    }
    cout<<v[poz];
    }
    return 0;
}
