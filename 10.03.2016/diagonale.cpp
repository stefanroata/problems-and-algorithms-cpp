#include <iostream>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,s1=0,s2=0,s;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                s1+=a[i][j];
            if(j==n-i+1)
                s2+=a[i][j];
        }
    }
    s=s1-s2;
    if(s<0)
        s=-s;
    cout<<s;
    return 0;
}
