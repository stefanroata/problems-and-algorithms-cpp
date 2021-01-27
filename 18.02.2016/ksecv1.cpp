#include <iostream>

using namespace std;

int v[1001];

bool identic(int poz1,int poz2,int poz3,int poz4)
{
    int i,j;
    for(i=poz1,j=poz3;i<=poz2&&j<=poz4;i++,j++)
    {
        if(v[i]!=v[j])
            return 0;
    }
    return 1;
}

int main()
{
    int n,k,i,j,ok=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i+k-1<=n;i++)
        for(j=i+1;j+k-1<=n;j++)
    {
        if(identic(i,i+k-1,j,j+k-1))
        {
            ok=1;
            cout<<i<<" "<<j;
            return 0;
        }
    }
    if(!ok)
        cout<<"NU";
    return 0;
}
