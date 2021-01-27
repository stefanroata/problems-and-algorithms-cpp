#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,s,smax=-1,nr;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]%2==0)
                s+=a[i][j];
        }
        if(s>smax)
        {
            smax=s;
            nr=i;
        }
    }
    cout<<nr;
    return 0;
}
