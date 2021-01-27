#include <iostream>
#include <cstdio>

using namespace std;

FILE*f=freopen("prieteni2.in","r",stdin);
FILE*g=freopen("prieteni2.out","w",stdout);

int main()
{
    int n,i,x,s=0,minim=1001;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<minim)
            minim=x;
        s+=x;
    }
    s-=minim;
    s+=(n-2)*minim;
    cout<<s;
    return 0;
}


