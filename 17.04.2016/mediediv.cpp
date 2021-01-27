#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,i,s=0,t=0;
    float r;
    cin>>n;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
            s+=(n/i);
            t+=2;
        }
    }
    if(i*i==n)
        {
            s+=i;
            t++;
        }
    r=(float)s/t;
    printf("%.2f",r);
    return 0;

}
