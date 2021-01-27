#include <iostream>
#include <algorithm>
using namespace std;

int nrc(int x)
{
    int cont=0;
    do{x/=10;cont++;}while(x);
    return cont;
}

int v[20],a[20],b[20];

int main()
{
    int n,m,t,i,j,nn,nr;
    i=1;
    cin>>n>>t>>m;
    nn=n;
    do
    {
        v[i]=nn%10;
        nn/=10;
        i++;
    }while(nn);
    nr=i-1;
    reverse(v+1,v+i);
    for(i=1;i<=m;i++)
        cin>>a[i]>>b[i];
    for(i=1;i<=t;i++)
    {
        for(j=1;j<=m;j++)
        {
            swap(v[a[j]],v[b[j]]);
        }
    }
    for(i=1;i<=nr;i++)
        cout<<v[i];
    return 0;
}
