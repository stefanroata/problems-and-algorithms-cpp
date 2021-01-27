#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        a[i][j]=(i*j)%10;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
