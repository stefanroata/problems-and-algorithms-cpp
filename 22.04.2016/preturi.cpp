#include <iostream>

using namespace std;

int a[101][101],v[101];

int main()
{
    int n,m,i,j,s=0,minim=1000000000;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(i=1;i<=m;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
        {
            s+=v[j]*a[i][j];
            if(a[i][j]==-1)
            {
                s=1000000001;
                break;
            }
        }
        if(s<minim)
            minim=s;
    }
    cout<<minim;
    return 0;
}
