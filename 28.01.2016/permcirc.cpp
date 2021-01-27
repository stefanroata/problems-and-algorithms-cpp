#include <iostream>

using namespace std;

int v[20],n;

void permutare()
{
    for(int i=0;i<=n-1;i++)
    {
        v[i]=v[i+1];
    }
}

void afisare()
{
    for(int i=0;i<=n-1;i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    int i;
    cin>>n;
    for(i=0;i<=n-1;i++)
        cin>>v[i];
    for(i=0;i<=n-1;i++)
        cout<<v[i]<<" ";
    cout<<'\n';
    for(i=1;i<=n-1;i++)
    {
        v[n]=v[0];
        permutare();
        afisare();
    }
    return 0;
}

