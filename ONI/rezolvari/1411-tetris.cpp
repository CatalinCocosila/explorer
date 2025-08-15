#include<fstream>
using namespace std;
ifstream fin("tetris.in");
ofstream fout("tetris.out");
int N,M,H[1001],k,c;
int main(){
    fin>>N>>M;
    while(fin>>k>>c){
        int st=c,dr=c+k-1;
        if(dr>M)break;
        int maxH=0;
        for(int i=st;i<=dr;i++)
        maxH=max(maxH,H[i]);
        if(maxH+k>N)
        break;
        for(int i=st;i<=dr;i++)
        H[i]=maxH+k;
    }
    int Lmax=0;
    for(int i=1;i<=M;i++)
    Lmax=max(Lmax,H[i]);
    int lung=0,maxLung=0;
    for(int i=1;i<=M;i++){
        if(H[i]==Lmax){
        lung++;
        maxLung=max(maxLung,lung);
        }
        else 
        lung=0;
    }
    fout<<Lmax<<"\n"<<maxLung<<"\n";
    return 0;
}