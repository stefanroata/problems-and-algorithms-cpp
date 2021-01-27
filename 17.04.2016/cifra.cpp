#include <iostream>
#include <algorithm>
using namespace std;

int v[15],w[15];

int main()
{
    int n,i=1,c,cif,t=0,k=1,ok,poz;
    cin>>n>>c;
    do
    {
        cif=n%10;
        n/=10;
        v[i]=cif;
        i++;
    }while(n);
    i--;
    reverse(v+1,v+i+1);
    n=i;
    for(i=1;i<=n;i++)
    {
        if(v[i]==c)
            t++;
        else
            w[k++]=v[i];
    }
    if(t==n)
        cout<<-1;
    else
    {
        ok=1;
        k--;
        for(i=1;i<=k;i++)
        {
            if(w[i]!=0)
                ok=0;
        }
        if(ok)
            cout<<0;
        else
        {
            i=1;
            while(w[i]==0)
                i++;
            poz=i;
            for(i=poz;i<=k;i++)
                cout<<w[i];
        }
    }
    return 0;
}
