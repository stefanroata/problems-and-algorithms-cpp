#include <iostream>

using namespace std;

int v[100001];

int main()
{
    int i,n,j,nr,ok=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        nr=0;
        for(j=1;j<=n;j++)
        {
            if(v[i]==v[j])
                nr++;
            if(nr>n/2)
        {
            cout<<"DA"<<" "<<v[i];
            ok=1;
            break;
        }
        }
    }
    if(ok==0)
        cout<<"NU";
    return 0;
}
