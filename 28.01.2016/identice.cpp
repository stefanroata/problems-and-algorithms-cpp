#include <iostream>
#include <algorithm>

using namespace std;

int v[1001],w[1001];

int main()
{
    int n,i,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        cin>>w[i];
    sort(v+1,v+n+1);
    sort(w+1,w+n+1);
    for(i=1;i<=n;i++)
    {
        if(v[i]!=w[i])
        {
            ok=0;
            break;
        }
    }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
