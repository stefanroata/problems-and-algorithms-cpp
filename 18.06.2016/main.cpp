#include <iostream>
#include <cstdio>

using namespace std;

FILE*f=freopen("cifru4.in","r",stdin);
FILE*g=freopen("cifru4.out","w",stdout);

int v[10];

int main()
{
    int a,x,aux,nr=0,r,s=0,i;
    cin>>x;
    a=aux=x;

    do{aux/=10;++nr;}while(aux);

    do
    {
        r=a%nr;
        v[r]++;
        a/=10;
    }while(a);

    for(i=1;i<=nr-1;i++)
    {
        if(v[i]>1)
            s+=(v[i]*(v[i]-1)/2);
    }
    s+=v[0];
    cout<<s;
    return 0;
}
