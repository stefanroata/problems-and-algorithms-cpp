#include <iostream>

using namespace std;

int a[101][101],v[7];

int main()
{
    int i,j,cif,x,k;
    i=1;
    cin>>x;
    do
    {
        cif=x%10;
        x/=10;
        v[i]=cif;
        i++;
    }while(x);
    for(i=1;i<=6;i++)
        a[i][i]=0;
    i=1;
    do
    {
        for(j=i+1;j<=6;j++)
            a[i][j]=v[i];
        for(k=i+1;k<=6;k++)
            a[k][i]=v[i];
        i++;
    }while(i<=5);
    for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
        cout<<a[i][j]<<" ";
        cout<<'\n';
        }


}
