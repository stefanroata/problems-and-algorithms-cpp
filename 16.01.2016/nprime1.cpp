#include <iostream>

using namespace std;

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
    int n,i,x,cont=0,maxim=-1,minim=1000000001;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        if(prim(x))
        {
            cont++;
            if(x>maxim)
                maxim=x;
            if(x<minim)
                minim=x;

        }
    }
    cout<<cont<<" "<<minim<<" "<<maxim;
    return 0;
}
