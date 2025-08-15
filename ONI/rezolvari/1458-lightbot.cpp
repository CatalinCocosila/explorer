#include <fstream>

using namespace std;
ifstream fin("lightbot.in");
ofstream fout("lightbot.out");
int C,N,x,sar,nrp,p,fr[200001],maxi,nrmax;
int main()
{
    fin>>C>>N;
    if (C==1)
    {
        fin>>x;
        p=x-1;
        while (fin>>x)
        {
            if (x-p>2 || x-p==2 && sar>0 || x-p<=0)
            {
                sar=0;
                nrp++;
            }
            else
            {
                if (x-p>1)
                    ++sar;
            }
            p=x;
        }
        fout<<nrp<<endl;
    }
    else if (C==3)
    {
        fin>>p;
        while (fin>>x)
        {
            if (x-p>2 || x-p==2 && sar>0 || x-p<=0)
            {
                sar=0;
            }
            else
            {
                if (x-p>1)
                {
                    ++sar;
                    fout<<x-1<<" ";
                }
            }
            p=x;
        }
    }
    else
    {

        while (fin>>x)
        {
            fr[x]++;
            if (maxi==fr[x])
                nrmax=max(nrmax,x);
            else if (fr[x]>maxi)
            {
                maxi=fr[x];
                nrmax=x;
            }
        }
        fout<<nrmax<<endl;
    }

    return 0;
}