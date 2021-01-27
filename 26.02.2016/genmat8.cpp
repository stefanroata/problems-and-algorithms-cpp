#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
                a[i][j]=i;
            else
                a[i][j]=j;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
