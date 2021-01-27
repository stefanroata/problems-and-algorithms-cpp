#include <iostream>

using namespace std;

int main()
{
    int i,n,l,j,k,p,t=1,c,sp,spi;
    cin>>c>>n;
    if(c==2)
    {

    l=2*n-1;
    i=l/2;
    k=1;
    while(i>=0)
    {
        for(j=1;j<=i;j++)
            cout<<" ";
        for(p=1;p<=k;p++)
            cout<<t;
        for(j=1;j<=i;j++)
            cout<<" ";
        cout<<'\n';
        i--;
        k+=2;
        t++;
    }
    i=1;
    k-=4;
    t-=2;
    while(i<=l/2&&k>=1)
    {
        for(j=1;j<=i;j++)
            cout<<" ";
        for(p=1;p<=k;p++)
            cout<<t;
        for(j=1;j<=i;j++)
            cout<<" ";
        cout<<'\n';
        i++;
        k-=2;
        t--;
    }
    }
    if(c==1)
    {
        i=1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                cout<<i;
            cout<<'\n';
        }
    }
    if(c==3)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=2*n;j++)
                cout<<i;
            cout<<'\n';
        }
    }
    if(c==4)
    {
        sp=n-1;
        i=1;
        k=1;
        while(sp>=0)
        {
            for(p=1;p<=sp;p++)
                cout<<" ";
            for(p=1;p<=k;p++)
                cout<<i;
            cout<<'\n';
            k+=2;
            i++;
            sp--;
        }
    }
    return 0;
}

