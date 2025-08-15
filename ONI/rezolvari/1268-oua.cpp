#include <fstream>
#define LMAX 52
#define NMAX 102

using namespace std;
ifstream fin("oua.in");
ofstream fout("oua.out");

struct iepure {int lin, col; //pozitia iepurelui
               int d;        //directia de deplasare
               int cos;      //valoarea cosului
               bool out;     //1 daca iepurele a iesit de pe pajiste
               };
int n, nrout; //numarul de iepuri
iepure v[NMAX];
int L, p, nroua, timp;
int T[LMAX][LMAX]; //T[i][j]=valoarea oului din pozitia i,j sau 0 daca nu exista ou
int dl[]={-1,0,1, 0};
int dc[]={ 0,1,0,-1};


int main()
{int i, j, valoare, k, maxim;
 //citire
 fin>>L>>p;
 for (k=0; k<p; k++)
     {fin>>i>>j>>valoare;
      T[i][j]=valoare;
     }
 fin>>n;
 for (k=1; k<=n; k++)
      {fin>>i>>j;
       v[k].lin=i; v[k].col=j;
       if (i==1) v[k].d=2;
       if (i==L) v[k].d=0;
       if (j==1) v[k].d=1;
       if (j==L) v[k].d=3;
      }
 //simulare
 while (nrout<n) //mai exista iepuri pe pajiste
       {timp++;
        for (k=1; k<=n; k++)
            if (!v[k].out)
                {
                  if (T[v[k].lin][v[k].col])
                      {
                        //il culeg
                        nroua++;
                        v[k].cos+= T[v[k].lin][v[k].col];
                        T[v[k].lin][v[k].col]=0;
                        //schimb directia
                        v[k].d=(v[k].d+1)%4;
                       }
                v[k].lin+=dl[v[k].d]; v[k].col+=dc[v[k].d];
                if (v[k].lin==0 || v[k].lin==L+1 || v[k].col==0 || v[k].col==L+1) {v[k].out=1; nrout++;}
            }
          
       }
 //afisare
 fout<<nroua<<' ';
 //cel mai valoros cos
 maxim=0;
 for (k=1; k<=n; k++)
      if (v[k].cos>maxim) maxim=v[k].cos;
 fout<<maxim<<' '<<timp<<'\n';

 return 0;
}