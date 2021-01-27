#include <iostream>

using namespace std;

int main()
{
    int i,n,l,j,k,p;
    cin>>n;
    l=2*n-1;
    i=l/2;
    k=1;
    while(i>=0)
    {
        for(j=1;j<=i;j++)
            cout<<"#";
        for(p=1;p<=k;p++)
            cout<<"*";
        for(j=1;j<=i;j++)
            cout<<"#";
        cout<<'\n';
        i--;
        k+=2;
    }
    i=1;
    k-=4;
    while(i<=l/2&&k>=1)
    {
        for(j=1;j<=i;j++)
            cout<<"#";
        for(p=1;p<=k;p++)
            cout<<"*";
        for(j=1;j<=i;j++)
            cout<<"#";
        cout<<'\n';
        i++;
        k-=2;
    }
    return 0;
}
