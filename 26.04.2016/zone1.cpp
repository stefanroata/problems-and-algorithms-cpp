#include <iostream>
#include <algorithm>

using namespace std;


int a[101][101],v[5];

int main()
{
    int n,i,j,s1=0,s2=0,s3=0,s4=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(i<j&&i+j<n+1)
                s1+=a[i][j];
            if(i>j&&i+j>n+1)
                s2+=a[i][j];
            if(i>j&&i+j<n+1)
                s3+=a[i][j];
            if(i<j&&i+j>n+1)
                s4+=a[i][j];
        }
    }
    v[1]=s1;
    v[2]=s2;
    v[3]=s3;
    v[4]=s4;
    sort(v+1,v+5);
    for(i=1;i<=4;i++)
        cout<<v[i]<<" ";
    return 0;
}
