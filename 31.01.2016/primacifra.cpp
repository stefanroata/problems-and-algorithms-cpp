#include <iostream>
#include <algorithm>

using namespace std;

int prima_cifra(int x)
{
    int cmin=10,c;
    do
    {
        c=x%10;
        x/=10;
        if(c<cmin)
            cmin=c;
    }while(x);
    return cmin;
}

int v[1001],w[1001];

int main()
{
    int n,i,poz;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        w[i]=prima_cifra(v[i]);
    }
    sort(w+1,w+n+1);
    if(w[1]==0)
    {
        for(i=1;i<=n;i++)
            if(w[i]!=0)
        {
            poz=i;
            break;
        }
        swap(w[1],w[poz]);
    }
    for(i=1;i<=n;i++)
        cout<<w[i];
    return 0;
}
