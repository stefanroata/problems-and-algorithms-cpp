#include <iostream>

using namespace std;

int v[1001];

int main()
{
    long long n,i,poz1,poz2,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]%2==1)
            poz2=i;
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==1)
        {
            poz1=i;
            break;
        }
    }
    for(i=poz1;i<=poz2;i++)
        s+=v[i];
    cout<<s;
    return 0;

}
