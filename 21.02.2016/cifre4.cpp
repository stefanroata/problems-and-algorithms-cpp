#include <iostream>

using namespace std;

int c[20],v[20];

int main()
{
    int n,i,x,cif,nr=0,ok,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        do
        {
            ok=0;
            cif=x%10;
            x/=10;
            for(j=1;j<=nr;j++)
            {
                if(c[j]==cif)
                {
                    ok=1;
                    break;
                }
            }
            if(ok==1)
                v[j]++;
            else
            {
                nr++;
                c[nr]=cif;
                v[nr]++;
            }
        }while(x);
    }
    //nr--;
    do
    {
        ok=0;
        for(i=1;i<=nr-1;i++)
        {
            if(v[i]>v[i+1])
            {
                swap(v[i],v[i+1]);
                swap(c[i],c[i+1]);
                ok=1;
            }
            else
                if(v[i]==v[i+1])
            {
                if(c[i]>c[i+1])
                    swap(c[i],c[i+1]);
            }
        }
    }while(ok==1);

    for(i=1;i<=nr;i++)
        cout<<c[i]<<" ";
    return 0;
}
