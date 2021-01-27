#include <iostream>

using namespace std;

long long v[101];

int main()
{
    int n,i,ok=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=2;i<=n-1;i++)
    {
        if((v[i]%2==v[i+1]%2)&&(v[i+1]%2==v[i-1]%2))
        {
            ok=1;
            break;
        }
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
