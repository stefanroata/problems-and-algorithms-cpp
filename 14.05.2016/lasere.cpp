#include <cstdio>
#define X 10000000

using namespace std;

FILE*f=freopen("lasere.in","r",stdin);
FILE*g=freopen("lasere.out","w",stdout);

int a[205][205],dx[]={0,-1,-1,0,1,1,1,0,-1},dy[]={0,0,1,1,1,0,-1,-1,-1};
bool b[205][205];

int main()
{
    int n,m,i,j,k,d,t,p,gropi=0,l,nr2=0;
    bool ok;

    scanf("%d",&p);
    scanf("%d %d",&n,&m);


    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<=n+1;i++)
        a[0][i]=a[n+1][i]=a[i][0]=a[i][n+1]=X;

    for(k=1;k<=m;k++)
    {
        scanf("%d %d %d",&i,&j,&d);
        if(d==1)
            for(t=i-1;t>=1;t--)
                --a[t][j];
        if(d==2)
            for(t=j+1;t<=n;t++)
                --a[i][t];
        if(d==3)
            for(t=i+1;t<=n;t++)
            --a[t][j];
        if(d==4)
            for(t=j-1;t>=1;t--)
            --a[i][t];
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            ok=1;
            for(k=1;k<=8&&ok;k++)
                if(a[i+dx[k]][j+dy[k]]<a[i][j])
                ok=0;
            if(ok)
                gropi++,b[i][j]=1;
        }
    }

   for(i=1;i<=n;i++)
   {
       l=0;
       for(j=1;j<=n-1;j++)
       {
           if(b[i][j])
            l++;
           else
           {
               if(l>=2)
                nr2++;
            l=0;
           }
       }
       if(l>=2)
        nr2++;
   }

   if(p==1)
    printf("%d",gropi);
   else
    printf("%d",nr2);
   return 0;
}
