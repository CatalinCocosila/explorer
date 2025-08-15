#include <iostream>
#include <fstream>
using namespace std;
int f[100];
int main()
{
    ifstream fin("cod.in");
    ofstream fout("cod.out");
    int n,x;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x;
        f[x]++;
    }
    for(int i=0;i<=99;i++){
        if(f[i]%2!=0){
            fout<<i;
        }
    }
    return 0;
}