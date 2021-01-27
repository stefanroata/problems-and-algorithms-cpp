#include <iostream>

using namespace std;


int v[1600];

int main()
{
    int n,p,i;
    cin>>n>>p;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(i!=p)
            cout<<v[i]<<" ";
    }
    return 0;
}
