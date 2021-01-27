#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(j==i+1||j==i-1)
                s+=a[i][j];
        }
    }
    cout<<s;
    return 0;
}
