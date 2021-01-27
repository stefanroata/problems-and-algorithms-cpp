#include <iostream>

using namespace std;

int main()
{
    int n,i,x,k,nr=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==1)
            nr++;
    }
    if(nr%k==0)
        cout<<nr/k;
    else
        cout<<nr/k+1;
    return 0;
}
