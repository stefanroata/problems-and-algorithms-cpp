#include <iostream>

using namespace std;

int main()
{
    long long n,v,i,x,nr=1,s=0;
    cin>>n>>v;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(s+x<=v)
            s+=x;
        else
        {
            s=x;
            nr++;
        }
    }
    cout<<nr;
    return 0;
}
