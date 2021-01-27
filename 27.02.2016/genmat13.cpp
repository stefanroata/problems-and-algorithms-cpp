#include <iostream>

using namespace std;

int m[30][30];

int main()
{
    int n,a,b,i,j;
    cin>>n>>a>>b;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==a||j==b)
                m[i][j]=0;
        }
    }
    for(i=1;i<=a-1;i++)
    {
        for(j=1;j<=b-1;j++)
            m[i][j]=1;
    }
    for(i=a+1;i<=n;i++)
    {
        for(j=1;j<=b-1;j++)
            m[i][j]=3;
    }
    for(i=1;i<=a-1;i++)
    {
        for(j=b+1;j<=n;j++)
            m[i][j]=2;
    }
    for(i=a+1;i<=n;i++)
    {
        for(j=b+1;j<=n;j++)
            m[i][j]=4;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<m[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
