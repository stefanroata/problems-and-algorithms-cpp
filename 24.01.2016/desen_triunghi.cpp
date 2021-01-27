#include <iostream>

using namespace std;

int main()
{
    int n,i,j,sp,spi;
    cin>>n;
    sp=n;
    spi=0;
    while(sp>=2)
    {
        for(i=1;i<=sp;i++)
            cout<<" ";
        cout<<"*";
        for(i=1;i<=spi;i++)
            cout<<" ";
        if(spi)
            cout<<"*";
        cout<<'\n';;
        if(spi==0)
            spi++;
        else
            spi+=2;
        sp--;
    }
    for(i=1;i<=2*n;i++)
    {
        if(i%2==0)
            cout<<"*";
        else
            cout<<" ";
    }
    return 0;
}
