#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,i,x,l=0,ok1=0,ok2=0,nr1,nr2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>=100&&x<=999)
            v[x]++;
    }
    for(i=999;i>=100;i--)
    {
        if(v[i]==0)
        {
            l++;
            if(l==1)
            {
                nr2=i;
                ok2=1;
            }
            if(l==2)
            {
                nr1=i;
                ok1=1;
            }
            if(l>2)
                break;
        }
    }
    if(ok1&&ok2)
    {
        cout<<nr1<<" "<<nr2;
    }
    else
        cout<<"NU EXISTA";
    return 0;
}
