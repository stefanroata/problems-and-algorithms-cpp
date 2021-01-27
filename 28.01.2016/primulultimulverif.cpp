#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,n1,n2,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    if(v[1]>v[n])
        swap(v[1],v[n]);
    n1=v[1];
    n2=v[n];
    for(i=2;i<=n-1;i++)
    {
        if(v[i]<n1||v[i]>n2)
        {
            ok=0;
            break;
        }
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
