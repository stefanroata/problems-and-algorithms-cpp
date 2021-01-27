#include <iostream>

using namespace std;

long long v[101];

int main()
{
    long long n,i,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]%v[n]!=0)
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
