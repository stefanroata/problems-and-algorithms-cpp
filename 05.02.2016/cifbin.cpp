#include <iostream>

using namespace std;

int nr0(long long x)
{
    int cont=0;
    while(x!=1)
    {
        if(x%2==0)
            cont++;
        x/=2;
    }
    return cont;
}

int nr1(long long x)
{
    int cont=0;
    if(x==1)
        return 1;
    else
    {
    while(x!=1)
        {
            if(x%2==1)
                cont++;
            x/=2;
        }
    return cont+1;
    }
}

int main()
{
    long long a,b;
    cin>>a>>b;
    if(nr1(a)>nr1(b))
        cout<<a;
    else
        if(nr1(a)<nr1(b))
        cout<<b;
    else
    {
        if(a<b)
            cout<<a;
        else
            cout<<b;
    }
    return 0;
}
