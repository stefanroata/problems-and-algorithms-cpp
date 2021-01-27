#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,j,i,k,t;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            t=(i-1)*m+1;
            for(k=1;k<=m;k++)
                a[i][k]=t,t++;
        }
        else
        {
           // k=i*m;
           t=i*m;
           for(k=1;k<=m;k++)
                a[i][k]=t,t--;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
