#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,m,i,j,ok=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(j=1;j<=m;j++)
    {
        i=1;
        while(a[i][j]==a[i+1][j]&&i+1<=n)
            i++;
        if(i==n)
        {
            ok=1;
            cout<<a[1][j]<<" ";
        }
    }
    if(ok==0)
        cout<<"nu exista";
    return 0;
}
