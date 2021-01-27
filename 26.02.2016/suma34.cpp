#include <iostream>

using namespace std;

int v[1000001];

int main()
{
    int n,i,t,r=1,q;
    cin>>n;
    v[1]=1;
    for(i=1;i<=n;i++)
    {
        t=0;
        for(q=1;q<=r||t;q++)
        {
            v[q]*=2;
            v[q]+=t;
            if(v[q]>10)
            {
            t=v[q]%10;
            v[q]/=10;
            r++;
            }
            else
                t=0;
        }
    }
}
