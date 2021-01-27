#include <iostream>

using namespace std;

int sumcif_verif(int x)
{
    int s=0,cif;
    while(x)
    {
        cif=x%10;
        s+=cif;
        x/=10;
    }
    return s%2;
}

int main()
{
    int n,i,a,x,cont=0;
    cin>>n;
    cin>>a;
    for(i=1;i<n;++i)
    {
        cin>>x;
        if(sumcif_verif(a)+sumcif_verif(x)==1)
            cont++;
        a=x;
    }
    cout<<cont;
    return 0;
}
