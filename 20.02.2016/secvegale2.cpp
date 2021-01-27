#include <iostream>

using namespace std;

int v[100001];

int main()
{
    long long n,i,secv=0,j,l;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    l=1;
    for(i=1;i<=n-1;i++)
    {
        if(v[i]==v[i+1])
            l++;
        else
        {
            secv+=l*(l+1)/2;
            l=1;
        }
    }
    secv+=l*(l+1)/2;
    cout<<secv;
    return 0;
}
