#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i=1,j,t;
    cin>>n;
    t=n;
    for(j=1;j<=n;j++)
    {
        a[i][j]=-1;
        i++;
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i][j]!=-1)
                a[i][j]=t;
        }
        t--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==-1)
                cout<<0<<" ";
            else
                cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
