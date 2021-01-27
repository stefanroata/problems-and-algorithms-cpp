#include <iostream>

using namespace std;

int v[1000001];

int main()
{
    int n,i=1,r=0,t=1,j,a,b,ok,s=0;
    cin>>n;
    v[1]=1;
    while(t<=n)
    {
        ok=0;
        for(j=1;j<=i||r;j++)
        {
            if(j==i+1&&r)
                ok=1;
            v[j]*=2;
            a=v[j]%10;
            b=v[j]/10;
            v[j]=a+r;
            r=b;
        }
        if(ok)
        i++;
        t++;
    }
    for(j=i;j>=1;j--)
        s+=v[j];
    cout<<s<<'\n';
    for(j=i;j>=1;j--)
        cout<<v[j];
    return 0;
}
