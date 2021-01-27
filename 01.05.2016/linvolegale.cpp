#include <iostream>

using namespace std;

int a[101][101],sl[101],sc[101];

int main()
{
    int n,i,j,s,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            s+=a[i][j];
        }
        sl[i]=s;
    }
    for(j=1;j<=n;j++)
    {
        s=0;
        for(i=1;i<=n;i++)
            s+=a[i][j];
        sc[j]=s;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(sl[i]==sc[j])
                nr++;
        }
    }
    cout<<nr;
    return 0;
}
