#include <iostream>

using namespace std;

int v[202];

int main()
{
   int n,i,k,nr1,nr2;
   cin>>k>>n;
   for(i=0;i<=n-1;i++)
    cin>>v[i];
   for(i=0;i<=n-1;i++)
   {
       nr1=v[i];
       nr2=v[i];
       while(nr1%k!=0&&nr2%k!=0)
       {
           nr1--;
           nr2++;
           if(nr1%k==0&&nr2%k==0)
            v[i]=nr1;
           else
            if(nr1%k==0)
            v[i]=nr1;
           else
           if(nr2%k==0)
           v[i]=nr2;
       }
   }
   for(i=n-1;i>=0;--i)
    cout<<v[i]<<" ";
   return 0;
}
