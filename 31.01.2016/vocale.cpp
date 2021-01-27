#include <iostream>

using namespace std;

bool vocala(int c)
{
    if(c==97)
        return true;
    if(c==101)
        return true;
    if(c==105)
        return true;
    if(c==111)
        return true;
    if(c==117)
        return true;
    return false;
}

int v[4004];

int main()
{
    int n,i;
    char c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>c;
        v[i]=(int)c;
    }
    for(i=1;i<=n;i++)
    {
        if(vocala(v[i]))
            cout<<(char)v[i]<<" ";
    }
    for(i=1;i<=n;i++)
    {
        if(!vocala(v[i]))
            cout<<(char)v[i]<<" ";
    }
}
