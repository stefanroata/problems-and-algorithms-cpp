#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==1)
            cout<<v[i]<<" ";
    }
    return 0;
}

