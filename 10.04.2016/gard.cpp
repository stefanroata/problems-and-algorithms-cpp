#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,maxim=-1,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>maxim)
            maxim=v[i];
    }
    for(i=1;i<=n;i++)
    s+=(maxim-v[i]);
    cout<<s;
    return 0;
}
