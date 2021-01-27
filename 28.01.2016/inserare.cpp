#include <iostream>
#include <cmath>
using namespace std;

float v[202];

int main()
{
    float s;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>v[i];
    for(i=1;i<=n-1;i++)
    {
        s=v[i]+v[i+1];
        s/=2;
        if(s==(int)s)
            cout<<v[i]<<" "<<s<<" ";
        else
            cout<<v[i]<<" ";
    }
    cout<<v[n];
    return 0;
}
