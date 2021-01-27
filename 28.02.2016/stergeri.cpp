#include <iostream>

using namespace std;

int v[1001];

int main()
{
    int n,m,i,j,s1=0,s2=0,k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>v[j];
        j=1;
        s1=v[j];
        while(j<=m-1)
        {
            s2=0;
            for(k=j+1;k<=m;k++)
                s2+=v[k];
            if(s1==s2)
                {
                    cout<<j<<" "<<m-j<<'\n';
                    break;
                }
            j++;
            s1+=v[j];
        }
    }
    return 0;
}
