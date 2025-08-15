#include <fstream>

using namespace std;
ifstream fin("echer.in");
ofstream fout("echer.out");
int C,a,b,A,B,nrm,c1,c2,mini,maxi,nract;
int main()
{
    fin>>C>>a>>b>>A>>B;

    c1=A/a;
    c2=B/b;
    mini=min(c1,c2);
    maxi=max(c1,c2);
    if (maxi-mini==0)
    {
        nrm=3*mini-2;
    }
    else if (maxi-mini==1)
    {
        nrm=3*mini-1;
    }
    else if ((maxi-mini)%2==0 && maxi-mini>1)
    {
        nrm=3*mini-2+2*(maxi-mini);
    }
    else if ((maxi-mini)%2!=0 && maxi-mini>1)
    {
        nrm=3*mini-3+2*(maxi-mini);
    }
    if (C==1)
        fout<<nrm<<endl;
    else if (C==2)
    {
        fout<<"1 ";
        for (int i=1; i<=mini-1; i++)
            fout<<"2 3 1 ";
        nract+=1+3*(mini-1);
        if (c1-c2==1)
        {
            fout<<"4 ";
        }
        else if (c2-c1==1)
        {
            fout<<"2 ";
        }
        else if (c1-c2>1)
        {   int i;
            for ( i=nract;i<=nrm-4;i+=4)
            {
                fout<<"4 6 3 1 ";
            }
            nract=i;
            if (nrm-nract==1)
                fout<<"4 ";
        }
        else if (c2-c1>1)
        {
            int i;
            for ( i=nract;i<=nrm-4;i+=4)
            {
                fout<<"2 7 5 1 ";
            }
            nract=i;
            if (nrm-nract==1)
                fout<<"2 ";
        }


    }


    return 0;
}