#include <iostream>
#include <fstream>
#include <climits>
#include <cmath>



using namespace std;
ifstream fin("gazon.in");
ofstream fout("gazon.out");



int main()
{
    int c,n,m,d,cm,ct,cd;
    fin>>c>>n>>m>>d>>cd>>ct>>cm;
    if(c==1)
    {
        int r=n/d;
        int col=m/d;
        fout<<r*col<<" ";
        int rr=n%d;
        int cr=m%d;
        fout<<rr*cr;
        return 0;
    }
    else if(c==2)
    {
        long long r=n/d;
        long long col=m/d;
        long long rr=n%d;
        long long cr=m%d;
        long long nr=r*col;
        long long ncr=r;
        long long nrr=col;
        if(rr>0 && rr*2==d)
        {
            nr=nr+nrr/2+nrr%2;
            if(ncr>0 && nrr%2==1 && cr==rr)
            {
                ncr--;
            }
        }
        else if(rr>0)
        {
            //taiam rr
            nr=nr+nrr;
            if(d-rr==cr)
            {
                ncr=ncr-min(nrr,ncr);
            }
        }
        if(cr*2==d && cr>0)
        {
            nr=nr+ncr/2+ncr%2;

        }
        else if(cr>0)
        {
            nr=nr+ncr;
        }
        fout<<nr;
        return 0;
    }
    long long r=n/d;
    long long col=m/d;
    long long rr=n%d;
    long long cr=m%d;
    long long nr=r*col;
    long long cost=nr*cd+nr*cm;
    long long ncr=r;
    long long nrr=col;
    if(cr>0)
    {
        cost=cost+ncr*cm;
    }
    if(rr>0)
    {
        cost=cost+nrr*cm;
    }
    if(rr>0 && rr*2==d)
    {
        nr=nrr/2+nrr%2;
        cost=cost+nr*cd+nr*ct;

        if(ncr>0 && nrr%2==1 && cr==rr)
        {
            ncr--;
        }
    }
    else if(rr>0)
    {
        //taiam rr

        cost=cost+ct*nrr+cd*nrr;
        if(d-rr==cr)
        {
            ncr=ncr-min(nrr,ncr);
        }
    }
    if(cr*2==d && cr>0)
    {
        nr=ncr/2+ncr%2;
        cost=cost+nr*cd+nr*ct;

    }
    else if(cr>0)
    {

        cost=cost+ncr*cd+ncr*ct;
    }
    fout<<cost;
    return 0;
}