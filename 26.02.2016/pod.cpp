#include <iostream>

using namespace std;

int a[1001][1001];

int main()
{
    int n,m,i,j,minim,s=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(j=1;j<=m;j++)
    {
        minim=10001;
        for(i=1;i<=n;i++)
            if(a[i][j]<minim)
            minim=a[i][j];
        s+=minim;
    }
    cout<<s;
    return 0;
}
