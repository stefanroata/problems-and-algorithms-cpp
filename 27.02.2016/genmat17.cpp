#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        if(i%2==1)
        {
            k=(i-1)*2*n+1;
            for(j=1;j<=2*n;j++)
                a[i][j]=k,k+=2;
        }
        else
        {
            k=2*i*n;
            for(j=1;j<=2*n;j++)
                a[i][j]=k,k-=2;
        }
    }
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=2*n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
