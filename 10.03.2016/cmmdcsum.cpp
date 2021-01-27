#include <iostream>
#include <algorithm>

using namespace std;

int a[101][101];

int main()
{
    int n,i,j,s1=0,s2=0;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    for(i=1;i<=j;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<j)
                s1+=a[i][j];
            if(i>j)
                s2+=a[i][j];
        }
    }
    cout<<__gcd(s1,s2);
    return 0;
}
