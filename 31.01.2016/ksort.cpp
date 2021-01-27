#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int x,int y)
{
    if(x>y)
        return 1;
    return 0;
}


int v[1001];

int main()
{
    int n,i,maxim=-1,pozmax;
    cin>>n;
    for(i=0;i<=n-1;i++)
        {
            cin>>v[i];
            if(v[i]>maxim)
            {
                maxim=v[i];
                pozmax=i;
            }
        }
        sort(v,v+pozmax);
        sort(v+pozmax,v+n,comp);

    for(i=0;i<=n-1;i++)
        cout<<v[i]<<" ";
    return 0;

}
