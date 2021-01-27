#include <iostream>

using namespace std;

int v[200001],u[200001];

int main()
{
    int n,i,m,poz1,poz2,x;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>poz1>>poz2>>x;
        u[poz1]=u[poz1]+x;
        u[poz2+1]=u[poz2+1]-x;
    }
    int s=0;
    for(i=1;i<=n;i++)
    {
        s+=u[i];
        cout<<s<<" ";
    }
    return 0;
}
