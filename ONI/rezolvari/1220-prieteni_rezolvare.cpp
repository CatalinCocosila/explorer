#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("prieteni.in");
ofstream fout("prieteni.out");
int sumacif(int nr){
    int s = 0 ; 
    while(nr){
        s +=( nr % 10);
        nr = nr / 10;
    }
    return s;
}
int cmmdc(int a, int b){
         while(b){
           int r = a %b ;
           a = b;
           b = r ;
       }
           return a;
}
int main()
{
    bool prim[65535]={};
    int j,d,n ,v[100000]={},s,vf[100000]={},i1=0;
    prim[0]=prim[1]=1;
    for(j=2;j<65535;j++){
        if(prim[j]==0){
        for(d=j+j;d<65535;d+=j){
            prim[d] = 1;
        }
        }
    }
    fin>>n;
    for(int i = 1 ; i <= n ; i++){
        fin>>v[i];
        prim[v[i]] = 1; // consider ca v[i] nu e prim pentru ca mai jos o sa pun elemente in vectorul nou format si nu trebuie pus si v[i] 
    }
   for(int i = 1 ; i <= n ; i++){
       s = sumacif(v[i]);
       if(cmmdc(v[i],s)==1){
           for(j = s ; j <= v[i]; j++){
               if(prim[j]==0){
                   i1++;
                   vf[i1] = j;
                   prim[j]=1;
               }
           }
       }
       i1++;
       vf[i1]=v[i];
   }
   fout<<i1<<endl;
   for(int i = 1; i <= i1 ; i++){
       fout<<vf[i]<<" ";
   }
    return 0;
}