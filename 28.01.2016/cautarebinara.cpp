#include <iostream>

using namespace std;

int v[25001],w[200001];

int main()
{
    int n,m,i,j,x,gasit,ls,ld,mij;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>m;
    for(j=1;j<=m;j++)
        cin>>w[j];
    for(i=1;i<=m;i++)
    {
        x=w[i];
        ls=1;
        ld=n;
        gasit=0;
        while(ls<=ld&&!gasit)
        {
            mij=(ls+ld)/2;
            if(v[mij]==x)
            {
                gasit=1;
                break;
            }
            if(v[mij]<x)
                ls=mij+1;
            else
                ld=mij-1;
        }
        cout<<gasit<<" ";
    }
    return 0;
}
