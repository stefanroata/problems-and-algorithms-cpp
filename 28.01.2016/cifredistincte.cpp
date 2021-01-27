#include <iostream>
#include <algorithm>

using namespace std;

int v[11];

bool cife_distincte(long long x)
{
    int cif;
    do
    {
        cif=x%10;
        x/=10;
        v[cif]++;
        if(v[cif]>1)
            return 0;
    }while(x);
    return 1;
}

int main()
{
    int n,i;
    long long x;
    bool ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        fill(v,v+10,0);
        if(!cife_distincte(x))
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
