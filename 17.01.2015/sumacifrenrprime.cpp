#include <iostream>

using namespace std;

int sumcif(int x)
{
    int cif,s=0;
    while(x)
    {
        cif=x%10;
        x/=10;
        s+=cif;
    }
    return s;
}




bool prim(int x)
{
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2)
        if(x%i==0)
        return false;
    return true;
}



int main()
{
    int n,i,x,cont=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(prim(x)&&prim(sumcif(x)))
            cont++;
    }
    cout<<cont;
    return 0;
}
