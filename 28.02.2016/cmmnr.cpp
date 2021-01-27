#include <iostream>

using namespace std;

int nr_cif(int x,int k)
{
    int cif,nr=0;
    do
    {
        cif=x%10;
        x/=10;
       if(cif)
       {
           if(k%cif==0)
            nr++;
       }
    }while(x);
    return nr;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<nr_cif(a,b);
    return 0;
}
