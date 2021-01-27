#include <iostream>

using namespace std;

int a[101][101],v[11];

int main()
{
    int x,i=1,cif,n,j;
    cin>>x;
    do
    {
        cif=x%10;
        x/=10;
        v[i]=cif;
        i++;
    }while(x);
    i--;
    n=i;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
            a[i][j]=v[j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
