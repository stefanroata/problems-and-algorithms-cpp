#include <fstream>

using namespace std;
ifstream f("memory002.in");
ofstream g("memory002.out");
long long s , i , n , a , minim , maxim , smin , smax , suma ;

int main()
{
    f >> n ;
    minim = 2000000000 ;
    maxim = 0 ;
    suma = 0 ;
    for ( i=1 ; i<=n ; i++ )
    {
        f >> a ;
        suma+=a ;
        if ( a<minim ){ minim=a ; smin=suma; }
        if( a>maxim ){ maxim=a ; smax=suma; }
    }
    if ( smin < smax ) { s = smax - smin + minim ; }
                  else { s = smin - smax + maxim ; }
    g << s ;
    return 0;
}
