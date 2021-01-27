#include <iostream>

using namespace std;

int a[31][31];

int main()
{
    int li,lf,ci,cf,n,j,i;
    cin>>n;
    li=1;
    lf=n;
    ci=1;
    cf=n;
    j=1;
    a[1][1]=1;
    while(j<=n/2+1)
    {
        if(j%2==1)
        {
            for(i=ci;i<=cf;i++)
            a[li][i]=a[lf][i]=1;
            for(i=li+1;i<=lf-1;i++)
                a[i][ci]=a[i][cf]=1;
        }
        li++;
        ci++;
        cf--;
        lf--;
        j++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
