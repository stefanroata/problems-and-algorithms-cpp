#include <iostream>

using namespace std;

int v1[20],v2[20];

int main()
{
    int n,cif,i=1,j=1,t,n1=0,n2=0,k,dif;
    cin>>n;
    do
    {
        cif=n%10;
        if(cif%2==0)
            v1[i++]=cif;
        if(cif%2==1)
            v2[j++]=cif;
        n/=10;
    }while(n);
    i--;
    j--;
    t=1;
    for(k=1;k<=i;k++)
    {
        n1+=v1[k]*t;
        t*=10;
    }
    t=1;
    for(k=1;k<=j;k++)
    {
        n2+=v2[k]*t;
        t*=10;
    }
    dif=n1-n2;
    if(dif<0)
        dif=-dif;
    cout<<dif;
    return 0;
}
