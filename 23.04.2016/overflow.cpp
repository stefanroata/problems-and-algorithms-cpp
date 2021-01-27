#include <iostream>

using namespace std;

long long v[100001];

int main()
{
    long long a,b,p;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        p=a*b;
        if(p<0)
            v[i]=-1;
        else
            v[i]=p;
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]==-1)
            cout<<"Overflow!"<<'\n';
        else cout<<v[i]<<'\n';

    }
    return 0;
}
