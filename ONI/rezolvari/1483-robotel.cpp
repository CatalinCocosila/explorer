#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int n,c,m,k,l,caz,i,j,nord,sud,est,vest,ok,no,e,s,v,r,p ;
char ord , o , a[205][205] ;
int main()
{
    ifstream in("robotel.in");
    ofstream out("robotel.out");
    in >> caz >> n >> m ;
    for ( i = 1 ; i <= n ; i ++ )
        for (j = 1 ; j <= n ; j ++ )
            a[i][j] = '*' ;
    for ( i = 1 ; i <= m ; i ++ )
    {
        in >> l >> c >> o ;
        a[l][c] = o ;
    }
    for ( i = 1 ; i <= n ; i ++ )
    {
        for ( j = 1 ; j <= n ; j ++ )
        {
            if ( a[i][j] == 'S' )
            {
                for ( k = i + 1 ; k <= n ; k ++ )
                {
                    if ( a[k][j] == 'N' )
                    {
                        r ++ ;
                        a[i][j] = 'n' ;
                        a[k][j] = 's' ;
                        if ( caz == 1 )
                        out << i << " " << j << " " << k << " " << j << '\n' ;
                        k = n + 1 ;
                    }
                    else if ( a[k][j] != '*' )
                        k = n + 1 ;
                }
            }
            if ( a[i][j] == 'E' )
            {
                for ( k = j + 1 ; k <= n ; k ++ )
                {
                    if ( a[i][k] == 'V' )
                    {
                        r ++ ;
                        a[i][j] = 'e' ;
                        a[i][k] = 'v' ;
                        if ( caz == 1 )
                        out << i << " " << j << " " << i << " " << k << '\n' ;
                        k = n + 1 ;
                    }
                    else if ( a[i][k] != '*' )
                        k = n + 1 ;
                }
            }
        }
    }
    if ( caz == 1 )
    if ( r == 0 )
        out << r ;
    if ( caz == 2 )
    {
        i = j = 1 ;
        ord = 'E' ;
        nord = sud = est = vest = 0 ;
        while ( i >= 1 && i <= n && j >= 1 && j <= n )
        {
            if ( a[i][j] != '*' )
                ord = a[i][j] ;
            if ( ord == 'E' && j < n )
            {
                cout << i << " " << j << '\n' ;
                est ++ ;
                j ++ ;
            }
            else if ( ord == 'V' && j > 1 )
            {
                vest ++ ;
                j -- ;
            }
            else if ( ord == 'S' && i < n )
            {
                sud ++ ;
                i ++ ;
            }
            else if ( ord == 'N' && i > 1 )
            {
                nord ++ ;
                i -- ;
            }
            else
            {
                if ( ord == 'n' )
                    for ( k = i ; a[k][j] != 's' ; k -- )
                        nord ++ ;
                else if ( ord == 's' )
                    for ( k = i ; a[k][j] != 'n' ; k ++ )
                        sud ++ ;
                else if ( ord == 'v' )
                    for ( p = j ; a[i][p] != 'e' ; p -- )
                        vest ++ ;
                else if ( ord == 'e' )
                    for ( p = j ; a[i][p] != 'v' ; p ++ )
                        est ++ ;
                break ;
            }
        }
        out << nord << " " << est << " " << sud << " " << vest ;
    }

    return 0;
}