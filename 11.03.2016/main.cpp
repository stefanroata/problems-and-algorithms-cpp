#include <fstream>

using namespace std;

ifstream f("betasah.in");
ofstream g("betasah.out");

int a[1010][1010],l[1010],c[1010];
int dx[]={0,-1,-1,0,1,1,1,0,-1},dy[]={0,0,1,1,1,0,-1,-1,-1};


int main()
{
    int n,d,k,i,j,lin,col,maxim=-1,nr=0,w,t;
    f>>n>>d>>k;
    for(i=1;i<=d;i++)
    {
        f>>l[i]>>c[i];
        a[l[i]][c[i]]=2;
    }
    for(i=1;i<=n;i++)
        {
            a[i][0]=i;
            a[i][i+1]=-1;
            a[i][i+2]=-1;
            a[i][i+3]=-1;
        }
    for(i=1;i<=k;i++)
    {
        f>>lin>>col;
        a[lin][col]=-1;
        a[lin][0]--;
    }

    //cerinta a

    for(i=1;i<=n;i++)
    {
        if(a[i][0]>maxim)
            maxim=a[i][0];
    }
    g<<maxim<<'\n';
    for(i=1;i<=n;i++)
        a[i][0]=-1;
    for(i=1;i<=n+1;i++)
        a[n+1][i]=-1;
    a[0][1]=a[0][2]=a[0][0]=a[0][3]=a[0][4]=-1;
    for(i=1;i<=d;i++)
    {
        for(j=1;j<=8;j++)
        {
          if(dx[j]==0&&dy[j]!=0)
          {
              if(dy[j]>0)
              {
                  w=dy[j];
                  while(a[l[i]][c[i]+w]!=-1)
                  {
                      if(a[l[i]][c[i]+w]==0)
                        a[l[i]][c[i]+w]=1;
                      w++;
                  }
              }
              if(dy[j]<0)
              {
                  w=dy[j];
                  while(a[l[i]][c[i]+w]!=-1&&c[i]+w>=1)
                  {
                      if(a[l[i]][c[i]+w]==0)
                      a[l[i]][c[i]+w]=1;
                      w--;

                  }
              }
          }
          else
            if(dy[j]==0&&dx[j]!=0)
          {
              if(dx[j]>0)
              {
                  w=dx[j];
                  while(a[l[i]+w][c[i]]!=-1)
                  {
                      if(a[l[i]+w][c[i]]==0)
                        a[l[i]+w][c[i]]=1;
                      w++;
                  }
              }
              if(dx[j]<0)
              {
                  w=dx[j];
                  while(a[l[i]+w][c[i]]!=-1&&l[i]+w>=1)
                  {
                      if(a[l[i]+w][c[i]]==0)
                        a[l[i]+w][c[i]]=1;
                    w--;
                  }
              }
          }
          else
            if(dx[j]!=0&&dy[j]!=0)
          {
              w=dx[j];
              t=dy[j];
              if(w<0&&t>0)
              {
                  while(a[l[i]+w][c[i]+t]!=-1&&l[i]+w>=1)
                  {
                      if(a[l[i]+w][c[i]+t]==0)
                        a[l[i]+w][c[i]+t]=1;
                      w--;
                      t++;
                  }
              }
              if(w>0&&t>0)
              {
                  while(a[l[i]+w][c[i]+t]!=-1)
                  {
                      if(a[l[i]+w][c[i]+t]==0)
                        a[l[i]+w][c[i]+t]=1;
                      w++;
                      t++;
                  }
              }
              if(w>0&&t<0)
              {
                  while(a[l[i]+w][c[i]+t]!=-1&&c[i]+t>=1)
                  {
                      if(a[l[i]+w][c[i]+t]==0)
                        a[l[i]+w][c[i]+t]=1;
                      w++;
                      t--;
                  }
              }
              if(w<0&&t<0)
              {
                  while(a[l[i]+w][c[i]+t]!=-1&&l[i]+w>=1&&c[i]+t>=1)
                  {
                      if(a[l[i]+w][c[i]+t]==0)
                        a[l[i]+w][c[i]+t]=1;
                      w--;
                      t--;
                  }
              }
          }
        }
    }

    //cerinta 2

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a[i][j]==1)
                nr++;
        }
    }
    g<<nr;
    return 0;
}
