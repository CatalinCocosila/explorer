///autor - prof.Pit-Rada Ionel-Vasile
///O(N*log(N)+Q) - cerinta 1
///O(min(Q,pi(N))*pi(N)) - (pi(N) este numarul de numere prime <=N) - cerinta 2
#include <fstream>
using namespace std;
ifstream  fin("prime.in");
ofstream fout("prime.out");
int N,Q,C,a,b,p,nv,v[50002],sp[50002];
long long T[50002];
char ciur[50002];
int main(){
    fin>>C>>N>>Q;
    ///eratostene
    ciur[0]=1; ciur[1]=1;
    for(int i=2;i<=N;i++){
        if(ciur[i]==0){
            int x=N/i;
            for(int j=i;j<=x;j++){
                ciur[j*i]=1;
            }
        }
    }
    if(C==1){
        ///sume partiale
        sp[0]=0; 
        for(int i=1;i<=N;i++){ 
            sp[i]=sp[i-1]+(1-ciur[i]); 
        } 
    }
    if(C==2){
        ///numere prime
        nv=0;
        for(int i=2;i<=N;i++){
            if(ciur[i]==0){
                v[++nv]=i;
            }
        }
    }
    for(int q=1;q<=Q;q++){
        if(C==1){
            fin>>a>>b;
            if(a==0){
                fout<<sp[b]<<"\n";
            }
            else{
                fout<<sp[b]-sp[a-1]<<"\n";
            }
        }
        if(C==2){
            fin>>p;
            if(T[p]==0){
                long long k2=0;
                if(p==0){
                    v[0]=-1; v[nv+1]=N+1;
                    for(int i=1;i<=nv+1;i++){
                        long long a=v[i]-v[i-1]-1;
                        k2=k2+(a+1)*a/2;
                    }
                }
                else{
                    v[0]=-1; v[nv+1]=N+1;
                    for(int i=1;i+p-1<=nv;i++){
                        long long a=v[i]-v[i-1];
                        long long b=v[i+p]-v[i+p-1];
                        k2=k2+a*b;
                    }
                }
                T[p]=k2;
            }
            fout<<T[p]<<"\n";
        }
    }
    return 0;
}