#include <iostream>
#include <algorithm>
using namespace std;

int v[10];

int main()
{
    int n,cif,i=1,j;
    cin>>n;
    do
    {
        cif=n%10;
        n/=10;
        v[i++]=cif;
    }while(n);
    i--;
    reverse(v+1,v+i+1);
    for(j=1;j<=i-1;j+=2)
        swap(v[j],v[j+1]);
    for(j=1;j<=i;j++)
        cout<<v[j];
    return 0;
}
