#include <iostream>

using namespace std;

int v[1001],n;

bool verifica_sir_constant()
{
    int i,ok=1;
    for(i=1;i<=n-1;i++)
        if(v[i]!=v[i+1])
            return 0;
    return 1;
}

bool verifica_sir_crescator()
{
    int i,ok=1;
    for(i=1;i<=n-1;i++)
        if(v[i]>v[i+1])
        return 0;
    return 1;
}

bool verifica_sir_descrescator()
{
    int i,ok=1;
    for(i=1;i<=n-1;i++)
        if(v[i]<v[i+1])
        return 0;
    return 1;
}

bool verifica_sir_strict_crescator()
{
    int i,ok=1;
    for(i=1;i<=n-1;i++)
        if(v[i]>=v[i+1])
        return 0;
    return 1;
}

bool verifica_sir_strict_descrescator()
{
    int i,ok=1;
    for(i=1;i<=n-1;i++)
        if(v[i]<=v[i+1])
        return 0;
    return 1;
}


int main()
{
    int n,i; bool a,b,c,d,e;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    a=verifica_sir_constant();
    b=verifica_sir_crescator();
    c=verifica_sir_descrescator();
    d=verifica_sir_strict_crescator();
    e=verifica_sir_strict_descrescator();
    if(a==1&&b==1)
        b=0;
    if(a==1&&c==1)
        c=0;
    if(a==1)
        cout<<"sir constant";
    else
    if(b==1)
        cout<<"sir crescator";
    else
    if(c==1)
        cout<<"sir descrescator";
    else
    if(d==1)
        cout<<"sir strict crescator";
    else
    if(e==1)
        cout<<"sir strict descrescator";
    else
    if(a==0&&b==0&&c==0&&d==0&&e==0)
        cout<<"sir neordonat";
    return 0;

}
