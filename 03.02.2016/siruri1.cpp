#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,j,k,ok;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
   // j=k+1;
    ok=0;
        for(i=1;i<=k;i++)
        {
            do
            {
        ok=0;
        for(j=i;j+k<=n;j+=k)
            if(v[j]>v[j+k])
        {
        swap(v[j],v[j+k]);
        ok=1;
        }

        }while(ok);
        }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
