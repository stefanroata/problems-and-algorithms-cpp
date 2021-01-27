#include <iostream>

using namespace std;

int numara_k(int x,int cif)
{
    int c,cont=0;
    do
    {
        c=x%10;
        x/=10;
        if(c==cif)
            cont++;
    }while(x);
    return cont;
}

int main()
{
    int k,x,cont=0;
    cin>>k;
    cin>>x;
    while(x)
    {
        if(x%2==0&&x)
        cont+=numara_k(x,k);
        cin>>x;
    }
    cout<<cont;
    return 0;
}
