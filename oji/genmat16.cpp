#include <iostream>

using namespace std;

int v[100];

int main()
{
    int n,i,j,f1,f2,f,k=3;
    f1=1;
    f2=1;
    v[1]=1;
    v[2]=1;
    cin>>n;
    for(i=1;i<=n*n-2;i++)
    {
        f=f1+f2;
        v[k]=f;
        k++;
        f1=f2;
        f2=f;
    }
    k=1;
    for(i=1;i<=n*n&&k<=n*n;i++)
    {
        if(i%2==1)
        {
            for(j=k;j<=k+n-1;j++)
                cout<<v[j]<<" ";
            cout<<'\n';
        }
        else
        {
            for(j=k+n-1;j>=k;j--)
                cout<<v[j]<<" ";
            cout<<'\n';
        }
        k+=n;
    }
    return 0;
}
