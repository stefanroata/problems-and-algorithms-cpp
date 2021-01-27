#include <iostream>
#include <algorithm>

using namespace std;

int v[1001];

int main()
{
    int n,i,minim=1000001,maxim=-1,pozmin,pozmax;
    cin>>n;
    for(i=0;i<=n-1;i++)
        {
            cin>>v[i];
            if(v[i]<minim)
            {
                minim=v[i];
                pozmin=i;
            }
            if(v[i]>maxim)
            {
                maxim=v[i];
                pozmax=i;
            }
        }
    if(pozmin>pozmax)
        swap(pozmin,pozmax);
    sort(v+pozmin,v+pozmax+1);
    for(i=0;i<=n-1;i++)
        cout<<v[i]<<" ";
    return 0;

}

