#include <fstream>
using namespace std;
int a[101][101];
ifstream cin("xy.in");
ofstream cout("xy.out");
int main()
{
    int n, m, k, i, terminat=0, lin, col, val, ok, nrmarc, maxi=-1;
    cin>>n>>m>>k;
    for( i = 1; i <= k && terminat == 0; i++ ){
        cin>>lin>>col;
        //punem 1 pe pozitiile ocupate de un x
        //si 2 pe pozitiile ocupate de un y
        if( i % 2 == 1 ){   //daca trebuie sa punem x
            if( a[lin][col] != 0 )
                terminat=1;
            else{
                a[lin][col]=1;
                val=1;
                ok=1;
                nrmarc=1;
                while( ok == 1 && lin + val <= n && col + val <= m && val < min( lin, col ) ){
                    if( a[lin-val][col-val] != 2 && a[lin-val][col+val] != 2 && a[lin+val][col-val] != 2 && a[lin+val][col+val] != 2 ){
                        nrmarc+=4;
                        if( a[lin-val][col-val] == 1 )
                            nrmarc--;
                        if( a[lin-val][col+val] == 1 )
                            nrmarc--;
                        if( a[lin+val][col-val] == 1 )
                            nrmarc--;
                        if( a[lin+val][col+val] == 1 )
                            nrmarc--;
                        a[lin-val][col-val]=a[lin-val][col+val]=a[lin+val][col-val]=a[lin+val][col+val]=1;
                        val++;
                    }
                    else
                        ok=0;
                }
                if( val == 1 )
                    terminat=1;
            }
        }
        else{   //daca trebuie sa punem y
            if( a[lin][col] != 0 )
                terminat=1;
            else{
                a[lin][col]=2;
                val=1;
                ok=1;
                nrmarc=1;
                while( ok == 1 && lin + val <= n && col + val <= m && val < min( lin, col ) ){
                    if( a[lin+val][col] != 1 && a[lin-val][col-val] != 1 && a[lin-val][col+val] != 1 ){
                        nrmarc+=3;
                        if( a[lin+val][col] == 2 )
                            nrmarc--;
                        if( a[lin-val][col-val] == 2 )
                            nrmarc--;
                        if( a[lin-val][col+val] == 2 )
                            nrmarc--;
                        a[lin+val][col]=a[lin-val][col-val]=a[lin-val][col+val]=2;
                        val++;
                    }
                    else
                        ok=0;
                }
                if( val == 1 )
                    terminat=1;
            }
        }
        if( nrmarc > maxi )
            maxi=nrmarc;
    }
    int j, nrramase=0;
    for( i = 1; i <= n; i++ )
        for( j = 1; j <= m; j++ )
            if( a[i][j] == 0 )
                nrramase++;;
    cout<<maxi<<" "<<nrramase<<" ";
    for( i = 1; i <= n; i++ )
        for( j = 1; j <= m; j++ )
            if( a[i][j] == 2 )
                a[i][j]=1;
    for( i = 1; i <= n; i++ )
        for( j = 1; j <= m; j++ )
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
    int lst, cst, ldr, cdr;
    maxi=-1;
    for( lst = 1; lst <= n; lst++ )
        for( cst = 1; cst <= m; cst++ )
            for( ldr = lst; ldr <= n; ldr++ )
                for( cdr = cst; cdr <= m; cdr++ )
                    if( a[ldr][cdr] - a[lst-1][cdr] - a[ldr][cst-1] + a[lst-1][cst-1] == ( ldr - lst + 1 ) * ( cdr - cst +  1 ) )
                        if( ( ldr - lst + 1 ) * ( cdr - cst +  1 ) > maxi )
                            maxi=( ldr - lst + 1 ) * ( cdr - cst +  1 );
    cout<<maxi;
    return 0;
}