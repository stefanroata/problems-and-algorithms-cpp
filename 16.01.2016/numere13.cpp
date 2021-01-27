#include <iostream>

using namespace std;

int prima_cifra(int x)
{
    while(x>9)x/=10;
    return x;
}

int main()
{
    int x,y,cont=0;
    cin>>x>>y;
    if(prima_cifra(x)==prima_cifra(y))
        cont++;
    while(x&&y)
    {
        cin>>x>>y;
        if(prima_cifra(x)==prima_cifra(y)&&x&&y)
        cont++;
    }
    cout<<cont;
    return 0;
}
