#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,j,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(__gcd(i,j)==1)
                nr++;
        }
    }
    cout<<nr;
    return 0;
}
