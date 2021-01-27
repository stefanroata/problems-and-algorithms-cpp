#include <iostream>

using namespace std;

int a[105][105];

int main()
{
    int n,m,i,j,nrv,k=1,nr=0,okk=0,dav,eu=0;
    cin>>n>>m;
    for(i=0;i<=m+1;i++)
        a[0][i]=a[n+1][i]=-1;
    for(i=0;i<=n+1;i++)
        a[i][0]=a[i][m+1]=-1;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    do
    {
    k=0;
    eu=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j])
            {
            eu=1;
            nrv=0;
            if(a[i][j+1]==0)
                nrv++;
            if(a[i][j-1]==0)
                nrv++;
            if(a[i+1][j]==0)
                nrv++;
            if(a[i-1][j]==0)
                nrv++;
            if(nrv>=2)
                {
                    k=1;
                    a[i][j]=2;
                }
            }
        }
    }
    if(eu==0)
        break;
   for(i=1;i<=n;i++)
   for(j=1;j<=m;j++)
   {
      if(a[i][j]==2)
        a[i][j]=0;
   }
   nr++;
    }while(k);
if(eu)
    cout<<-1;
else
    cout<<nr;
    return 0;
}
