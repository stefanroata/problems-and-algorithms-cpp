#include <iostream>

using namespace std;

int v[101],w[101];

int main()
{
    int n,i,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>v[i];
    w[v[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(w[i]!=1)
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
