#include <iostream>

using namespace std;

int m[1001][1001];

int main()
{
    int n,i,k,x,r=0,j=1,w,e,ok,okk,p;
    cin>>n>>k;
    p=n/k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(i%p==1)
        {
            r++;
            m[r][1]=x;
            j=2;
        }
        else
        {
            m[r][j]=x;
            j++;
        }
    }
    okk=0;
    for(i=1;i<=k;i++)
        for(j=i+1;j<=k;j++)
    {
        e=1;
        ok=1;
        for(w=1;w<=p;w++)
        {
            if(m[i][w]!=m[j][e])
                {
                    ok=0;
                    break;
                }
            e++;
        }
        if(ok)
        {cout<<i<<" "<<j;
        return 0;
        }

    }
    if(okk==0)
        cout<<"NU";
    return 0;
}
