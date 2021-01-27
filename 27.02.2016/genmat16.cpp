#include <iostream>

using namespace std;

long long v[1001];

int main()
{
    long long n,i,f1,f2,f;
    cin>>n;
    f1=1;
    f2=1;
    v[1]=1;
    v[2]=1;
    for(i=1;i<=n*n-2;i++)
    {
        f=f1+f2;
        v[i+2]=f;
        v[i+2]=v[i+2]%10;
        f1=f2;
        f2=f;
    }
    for(i=1;i<=n*n;i++)
    {
        cout<<v[i]<<" ";
        if(i%n==0)
            cout<<'\n';
    }
    return 0;
}
